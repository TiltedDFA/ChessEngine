#pragma once
#include "Includes.hpp"
#include "Resource_Manager.hpp"
#include <SFML/Graphics.hpp>
enum class PieceType {
	W_K = 0,
	W_Q,
	W_B,
	W_N,
	W_R,
	W_P,
	B_K,
	B_Q,
	B_B,
	B_N,
	B_R,
	B_P
};
class Piece
{
public:
	Piece() = delete;
	Piece(PieceType&& type, sf::Vector2i&& board_pos);
	//returns the sprite(in order to draw)
	const void draw(sf::RenderWindow& window)const;
	//used to set the position of the sprite
	void set_sprite_position(const sf::Vector2f& pos);
	//used to get the position of the sprite which will
	//also be used for logical calculations about the board
	const sf::Vector2f& get_sprite_position()const;
	//will be used for pawn premotions
	void change_sprite_texture(const PieceType& type);
private:
	PieceType m_piece_type;
	sf::Sprite m_sprite;
};

