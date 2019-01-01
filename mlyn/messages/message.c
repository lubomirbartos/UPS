

void handle_message(char *message) {
	//is valid JSON?

	char **parts = strtok(message, "(☭ ͜ʖ ☭)");

	if (parts[0] && parts[0] == 'admin') {
		handle_admin_message(parts);
	} else if (parts[0] && parts[0] == 'game') {
		handle_game_message(parts);
	} else if (parts[0] && parts[0] == 'chat') {
		handle_chat_message(parts);
	}
}