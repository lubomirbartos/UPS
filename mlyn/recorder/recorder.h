#ifndef RECORDER_H
#define RECORDER_H


/******************************************************
 *	Writes message to log.
 *	Parameters:
 * 		char *message: message we want to log
 *
 *	Returns: void
 *
 ******************************************************/
void write_to_log(char *message);

/******************************************************
 *	Writes statistic to statistics.
 *	Parameters:
 * 		char *message: message we want to log
 *
 *	Returns: void
 *
 ******************************************************/
void write_to_statistics(char *message);

/******************************************************
 *	Writes message to user's data log.
 *	Parameters:
 * 		char *message: message we want to log
 *
 *	Returns: void
 *
 ******************************************************/
void write_to_user_data(char *message);


#endif