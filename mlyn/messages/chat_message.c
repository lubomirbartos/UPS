




void handle_chat_message(char **parts) {
	if (parts[0] != 'chat') {
		exit;
	}

	if (parts[1]){
		char message = part[1];
		print_message(message);
	}
}
