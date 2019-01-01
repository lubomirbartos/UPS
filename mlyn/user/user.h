#ifndef USER_H
#define USER_H

typedef struct User {
	//ip, port...
	char *username;
	int in_game; // false = 0 | true = 1
} user;

/******************************************************
 *	Parameters:
 *		char *username username
 *
 *	Returns: int
 *		1 if user with this username exists
 *		0 if user with this username does not exist
 *
 ******************************************************/
int user_exists(char *username);


/******************************************************
 *	Parameters:
 *		char *username username
 *		char *password password
 *
 *	Returns: int
 *		1 if password is correct
 *		0 if password is not correct
 *
 ******************************************************/
int is_correct_password(char *username, char *password);

#endif