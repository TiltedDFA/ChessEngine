#include "Game.hpp"
Game::Game(){
	m_window.create(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_NAME);
    m_window.setFramerateLimit(30);
    m_board.load_position_from_FEN(STARTING_FEN);
}
void Game::Run() {
    sf::RectangleShape bground;
    bground.setSize({ WINDOW_WIDTH,WINDOW_HEIGHT });
    bground.setFillColor(sf::Color::Cyan);
    while (m_window.isOpen())
    {
        sf::Event event;
        while (m_window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                m_window.close();
        }

        m_window.clear();
        m_window.draw(bground);
        m_board.draw_pieces(m_window);
        m_window.display();
    }
}