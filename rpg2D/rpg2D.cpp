#include "Player.h"
#include "Component.h"
#include <SFML/Graphics.hpp>

sf::VideoMode vm(1920, 1080);
sf::RenderWindow gameWindow(vm, "Game!!", sf::Style::Fullscreen);

sf::Clock gameClock;

int main()
{
	Player player;
	sf::Texture playerTexture;
	sf::Sprite playerSprite;

	playerTexture.loadFromFile("Graphics/player.png");
	playerSprite.setTexture(playerTexture);

	while (gameWindow.isOpen())
	{
		//get input
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			gameWindow.close();
		}

		// update
		float deltaTime = gameClock.restart().asSeconds();
		player.Update(deltaTime);

		// draw
		gameWindow.clear();
		gameWindow.draw(playerSprite);
		player.Draw(gameWindow);
		gameWindow.display();
	}
	
}