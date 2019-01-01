#ifndef GAME_MASTER_H
#define GAME_MASTER_H

/******************************************************
 *	Waits until another user (opponent) shows up, then returns that user. 
 *
 *	Parameters:
 *		user* user: pointer to user, that demands to play
 *
 *	Returns: user* pointer to opponent
 *
 ******************************************************/
user* find_opponent(user *user);

/******************************************************
 *	Creates a thread and game for two users. 
 *
 *	Parameters:
 *		user* player_one: pointer to user1
 *		user* player_two: pointer to user2
 *
 ******************************************************/
void create_game(user *player_one, user *player_two);

#endif