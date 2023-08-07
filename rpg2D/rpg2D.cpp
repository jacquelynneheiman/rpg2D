#include "Player.h"
#include "TextureManager.h"
#include <SFML/Graphics.hpp>

const sf::Vector2u resolution(1920, 1080);

sf::VideoMode vm(resolution.x, resolution.y);
sf::RenderWindow gameWindow(vm, "Game!!", sf::Style::Fullscreen);

sf::Clock gameClock;

int main()
{
	TextureManager textureManager;
	Player player(resolution);

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