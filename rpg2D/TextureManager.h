#pragma once
#ifndef TEXTURE_MANAGER_H
#define TEXTURE_MANAGER_H


#include <SFML/Graphics.hpp>
#include <map>

class TextureManager
{
private:
	std::map<std::string, sf::Texture> m_Textures;
	static TextureManager* m_s_Instance;
public:
	TextureManager();
	static sf::Texture& GetTexture(std::string const& filename);

};

#endif // !TEXTURE_MANAGER_H