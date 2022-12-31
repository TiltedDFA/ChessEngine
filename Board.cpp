#include "Board.hpp"
#include <cctype>
Board::~Board() {
	for (const auto& i : m_pieces)
		delete i;
}
void Board::load_position_from_FEN(const std::string& fen) {
	int current_row = 8;
	int current_column = 1;
	size_t iter = 0;
	for (; iter < fen.size() && fen[iter] != ' '; ++iter)
	{
		if (current_row < 1 || current_column > 9) {
			throw std::runtime_error("Incorrect FEN");
		}
		switch (fen[iter]) {
		case 'K':
			//emplace_back is like push_back but for temp values
			m_pieces.push_back(new Piece(PieceType::W_K, sf::Vector2i({ current_column,current_row })));
			++current_column;
			break;
		case 'Q':
			m_pieces.push_back(new Piece(PieceType::W_Q, sf::Vector2i({ current_column,current_row })));
			++current_column;
			break;
		case 'B':
			m_pieces.push_back(new Piece(PieceType::W_B, sf::Vector2i({ current_column,current_row })));
			++current_column;
			break;
		case 'N':
			m_pieces.push_back(new Piece(PieceType::W_N, sf::Vector2i({ current_column,current_row })));
			++current_column;
			break;
		case 'R':
			m_pieces.push_back(new Piece(PieceType::W_R, sf::Vector2i({ current_column,current_row })));
			++current_column;
			break;
		case 'P':
			m_pieces.push_back(new Piece(PieceType::W_P, sf::Vector2i({ current_column,current_row })));
			++current_column;
			break;
		case 'k':
			//emplace_back is like push_back but for temp values
			m_pieces.push_back(new Piece(PieceType::B_K, sf::Vector2i({ current_column,current_row })));
			++current_column;
			break;
		case 'q':
			m_pieces.push_back(new Piece(PieceType::B_Q, sf::Vector2i({ current_column,current_row })));
			++current_column;
			break;
		case 'b':
			m_pieces.push_back(new Piece(PieceType::B_B, sf::Vector2i({ current_column,current_row })));
			++current_column;
			break;
		case 'n':
			m_pieces.push_back(new Piece(PieceType::B_N, sf::Vector2i({ current_column,current_row })));
			++current_column;
			break;
		case 'r':
			m_pieces.push_back(new Piece(PieceType::B_R, sf::Vector2i({ current_column,current_row })));
			++current_column;
			break;
		case 'p':
			m_pieces.push_back(new Piece(PieceType::B_P, sf::Vector2i({ current_column,current_row })));
			++current_column;
			break;
		case '/':
			current_column = 1;
			--current_row;
			break;
		default:
			if (std::isdigit(fen[iter])) {
				current_column += static_cast<int>(fen[iter] - '0');
			}
			break;
		}		
	}
	m_white_to_move = (fen[iter + 1] == 'w') ? true : false;
	for (iter += 3; !fen.empty() && fen[iter] != ' '; ++iter) {
		switch (fen[iter]) {
		case 'K':
			m_can_castle[0][0] = true;
			break;
		case 'Q':
			m_can_castle[0][1] = true;
			break;
		case 'k':
			m_can_castle[1][0] = true;
			break;
		case 'q':
			m_can_castle[1][1] = true;
			break;
		default:
			break; 
		}
	}
}
void Board::draw_pieces(sf::RenderWindow& window)const {
	for (const auto& i : m_pieces) {
		window.draw(i->get_Sprite());
	}
}