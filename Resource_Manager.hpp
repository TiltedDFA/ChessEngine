#pragma once
#include <SFML/Graphics.hpp>
class Resource_Manager
{	
public:
	Resource_Manager();
	Resource_Manager(const Resource_Manager& other) = delete;//deleting copy construct
	void operator=(const Resource_Manager& other) = delete;
	Resource_Manager(const Resource_Manager&& other) = delete;//deleting move construct
	void operator=(Resource_Manager&& other) = delete;
	static sf::Texture& get_texture(const std::string& texture_name);
	static sf::Font& get_font(const std::string& font_name);
private:
	static Resource_Manager* m_s_instance;
	std::map<std::string, sf::Texture> m_textures;
	std::map<std::string, sf::Font> m_fonts;	
};

