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
	bool lastKeyPressed = false;
	// Load a sprite to display
	sf::Texture texture;
	if (!texture.loadFromFile("assets\\grid.png")) {
		DEBUG_MSG("Failed to load file");
		return EXIT_FAILURE;
	}
	
	// Setup Players Default Animated Sprite
	AnimatedSprite animated_sprite(texture);
	/*animated_sprite.addFrame(sf::IntRect(258, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(343, 3, 84, 84));*/

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
					lastKeyPressed = false;
					animated_sprite.setType(1);
					
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
				{
					input.setCurrent(Input::Action::WALK);
					lastKeyPressed = true;
					animated_sprite.setType(2);
					
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
				{
					input.setCurrent(Input::Action::JUMP);
					animated_sprite.setType(3);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
				{
					input.setCurrent(Input::Action::SHOVEL);
					if(lastKeyPressed==false)
					{
						animated_sprite.setType(4);
					}
					else if (lastKeyPressed == true)
					{
						animated_sprite.setType(5);
					}
				}
			case sf::Event::TextEntered:
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
				{
					input.setCurrent(Input::Action::SWORD);
					if (lastKeyPressed == false)
					{
						animated_sprite.setType(6);
					}
					else if (lastKeyPressed == true)
					{
						animated_sprite.setType(7);
					}
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
				{
					input.setCurrent(Input::Action::ROAR);
					animated_sprite.setType(8);
					
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::H))
				{
					input.setCurrent(Input::Action::HAMMER);
					if (lastKeyPressed == false)
					{
						animated_sprite.setType(9);
					}
					else if (lastKeyPressed == true)
					{
						animated_sprite.setType(10);
					}
				}
				break;
			default:
				input.setCurrent(Input::Action::IDLE);
				animated_sprite.setType(0);
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