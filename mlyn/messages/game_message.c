


void handle_game_message(char **parts) {
	if (parts[0] != 'game') {
		exit;
	}


	if (parts[1] == 'insert') {
		if (parts[2]) {
			handle_insert_token(parts[2]);
		}
	} else if (parts[1] == 'move') {
		if (parts[2]) {
			handle_move_token(parts[2]);
		}
	} else if (parts[1] == 'kill') {
		if (parts[2]) {
			handle_kill_token(parts[2]);
		}
	} else {
		printf('Invalid argument in message %s', parts[1]);
	}
}


void handle_insert_token(char * souradnice) {
		char position[] = strtok(parts[2], '.');

		int circuit = atoi(position[0]); 
		int vertical = atoi(position[1]); 
		int horizontal = atoi(position[2]); 

		insert_token(circuit, vertical, horizontal);
}
void handle_move_token(char * souradnice) {

		char parts[] = strtok(souradnice, ';');

		char from[] = strtok(parts[0], '.');
		char to[] = strtok(parts[1], '.');


		int from_circuit = atoi(from[0]); 
		int from_vertical = atoi(from[1]); 
		int from_horizontal = atoi(from[2]); 

		int to_circuit = atoi(to[0]); 
		int to_vertical = atoi(to[1]); 
		int to_horizontal = atoi(to[2]); 

		move_token(from_circuit, from_vertical, from_horizontal, to_circuit, to_vertical, to_horizontal);
}

void handle_kill_token(char * souradnice) {
		char position[] = strtok(souradnice, '.');

		int circuit = atoi(position[0]); 
		int vertical = atoi(position[1]); 
		int horizontal = atoi(position[2]); 

		kill_token(circuit, vertical, horizontal);
}
