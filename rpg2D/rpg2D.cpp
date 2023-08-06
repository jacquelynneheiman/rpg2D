#include "Player.h"
#include "Component.h"
#include "TextureManager.h"
#include <SFML/Graphics.hpp>

sf::VideoMode vm(1920, 1080);
sf::RenderWindow gameWindow(vm, "Game!!", sf::Style::Fullscreen);

sf::Clock gameClock;

int main()
{
	TextureManager textureManager;
	Player player;

	while (gameWindow.isOpen())
	{
		//get input
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			gameWindow.close();
		}

		// update
		float deltaTime = gameClock.restart().asSeconds();
		player.Update(deltaTime, sf::Mouse::getPosition());

		// draw
		gameWindow.clear();
		player.Draw(gameWindow);
		gameWindow.display();
	}
	
}