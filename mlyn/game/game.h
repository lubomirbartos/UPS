#ifndef GAME_H
#define GAME_H

typedef struct Game {
	player *player_white;
	player *player_black;
	field *board;
} game;

typedef enum {
	int BLACK = 0;
	int WHITE = 0;
} PLAYER;

#endif