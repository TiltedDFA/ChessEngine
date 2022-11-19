#pragma once
#include <map>
#include <string>
#include <SFML/Graphics.hpp>
class Screen
{
public:
	Screen();
private:
	std::map<std::string, sf::RectangleShape> m_button_hitboxes;
};

