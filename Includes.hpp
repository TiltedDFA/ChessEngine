#pragma once
//Project Set up

#ifdef SFML_STATIC
#define _MAIN WinMain
#else
#define _MAIN main
#endif // SFML_STATIC


//Game related set-up
#define WINDOW_NAME "Chess"
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 800
#define CHESS_SPRITES_PATH "assets/Chess_Pieces_Sprite.png"

//Game constants
#define STARTING_FEN "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1"