#pragma once
#include <vector>
#include "Piece.hpp"
class Board
{
public:
	Board()=default;
	~Board();
	void load_position_from_FEN(const std::string& fen);
	void draw_pieces(sf::RenderWindow& window);
	
private:
	std::vector<Piece*> m_pieces;
	bool m_white_to_move;
	//[0 = white, 1 = black][kingside =0, queenside=1]
	bool m_can_castle[2][2];
};

