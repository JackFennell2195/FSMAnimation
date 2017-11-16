#include <iostream>
#include <SFML/Graphics.hpp>
#include <AnimatedSprite.h>
#include <Player.h>
#include <Input.h>
#include <Debug.h>

using namespace std;

int main()
{
	// Create the main window
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

	// Load a sprite to display
	sf::Texture texture;
	if (!texture.loadFromFile("assets\\grid.png")) {
		DEBUG_MSG("Failed to load file");
		return EXIT_FAILURE;
	}

	// Setup Players Default Animated Sprite
	AnimatedSprite animated_sprite(texture);
	
	for (int xCor = 0; xCor < 6; xCor++)
	{
		for (int yCor = 0; yCor < 6; yCor++)
		{
			animated_sprite.addFrame(sf::IntRect((yCor * 85 + 3),(xCor * 85 + 3), 84, 84));
		}
	}
	// Setup the Player
	Player player(animated_sprite);
	Input input;
	
	// Start the game loop
	while (window.isOpen())
	{
		// Process events
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				// Close window : exit
				window.close();
				break;
			case sf::Event::KeyPressed:
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
				{
					input.setCurrent(Input::Action::WALK);
					
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
				{
					input.setCurrent(Input::Action::WALK);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
				{
					input.setCurrent(Input::Action::JUMP);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
				{
					input.setCurrent(Input::Action::SHOVEL);
				}
			case sf::Event::TextEntered:
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
				{
					input.setCurrent(Input::Action::SWORD);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
				{
					input.setCurrent(Input::Action::ROAR);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::H))
				{
					input.setCurrent(Input::Action::HAMMER);
				}
				break;
			default:
				input.setCurrent(Input::Action::IDLE);
				break;
			}
		}

		// Handle input to Player
		player.handleInput(input);

		// Update the Player
		player.update();

		// Clear screen
		window.clear();

		// Draw the Players Current Animated Sprite
		
		window.draw(player.getAnimatedSprite());
		
		// Update the window
		window.display();
	}

	return EXIT_SUCCESS;
};