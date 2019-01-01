#ifndef PLAYER_H
#define PLAYER_H

typedef struct Player {
	user *user;
	int tokens_in_hand; // 0-9
	int state; // insert_tokens = 0 | move_tokens = 1 | move_anywhere = 2 | end = 3
} player;

#endif