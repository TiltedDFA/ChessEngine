#pragma once
#include "Includes.hpp"
#include "Resource_Manager.hpp"
#include "Board.hpp"
#include <SFML/Graphics.hpp>
class Game
{
public:
	Game();
	void Run();
private:
	sf::RenderWindow m_window;
	Resource_Manager m_resource_manager;
	Board m_board;
};

