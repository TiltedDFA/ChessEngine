#include "Piece.hpp"
Piece::Piece(PieceType&& type, sf::Vector2i&& board_pos) {
	m_piece_type = std::move(type);
	m_sprite.setPosition({ static_cast<float>((board_pos.x-1) * 100),
		static_cast<float>(abs(board_pos.y  - 8) * 100)});
	m_sprite.setTexture(Resource_Manager::get_texture(CHESS_SPRITES_PATH));
	switch (m_piece_type)
	{
	case PieceType::W_K:
		m_sprite.setTextureRect({ 0,0,100,100 });
		break;
	case PieceType::W_Q:
		m_sprite.setTextureRect({ 0,100,100,100 });
		break;
	case PieceType::W_B:
		m_sprite.setTextureRect({ 0,200,100,100 });
		break;
	case PieceType::W_N:
		m_sprite.setTextureRect({ 0,300,100,100 });
		break;
	case PieceType::W_R:
		m_sprite.setTextureRect({ 0,400,100,100 });
		break;
	case PieceType::W_P:
		m_sprite.setTextureRect({ 0,500,100,100 });
		break;
	case PieceType::B_K:
		m_sprite.setTextureRect({ 100,0,100,100 });
		break;
	case PieceType::B_Q:
		m_sprite.setTextureRect({ 100,100,100,100 });
		break;
	case PieceType::B_B:
		m_sprite.setTextureRect({ 100,200,100,100 });
		break;
	case PieceType::B_N:
		m_sprite.setTextureRect({ 100,300,100,100 });
		break;
	case PieceType::B_R:
		m_sprite.setTextureRect({ 100,400,100,100 });
		break;
	case PieceType::B_P:
		m_sprite.setTextureRect({ 100,500,100,100 });
		break;
	}
}
sf::Sprite Piece::get_Sprite()const {
	return m_sprite;
}
void Piece::set_sprite_position(const sf::Vector2f& pos) {
	m_sprite.setPosition(pos);
}
const sf::Vector2f& Piece::get_sprite_position()const {
	return m_sprite.getPosition();
}
void Piece::change_sprite_texture(const PieceType& type) {
	switch (type)
	{
	case PieceType::W_K:
		m_sprite.setTextureRect({ 0,0,100,100 });
		break;
	case PieceType::W_Q:
		m_sprite.setTextureRect({ 0,100,100,100 });
		break;
	case PieceType::W_B:
		m_sprite.setTextureRect({ 0,200,100,100 });
		break;
	case PieceType::W_N:
		m_sprite.setTextureRect({ 0,300,100,100 });
		break;
	case PieceType::W_R:
		m_sprite.setTextureRect({ 0,400,100,100 });
		break;
	case PieceType::W_P:
		m_sprite.setTextureRect({ 0,500,100,100 });
		break;
	case PieceType::B_K:
		m_sprite.setTextureRect({ 100,0,100,100 });
		break;
	case PieceType::B_Q:
		m_sprite.setTextureRect({ 100,100,100,100 });
		break;
	case PieceType::B_B:
		m_sprite.setTextureRect({ 100,200,100,100 });
		break;
	case PieceType::B_N:
		m_sprite.setTextureRect({ 100,300,100,100 });
		break;
	case PieceType::B_R:
		m_sprite.setTextureRect({ 100,400,100,100 });
		break;
	case PieceType::B_P:
		m_sprite.setTextureRect({ 100,500,100,100 });
		break;
	}
	m_piece_type = type;
}