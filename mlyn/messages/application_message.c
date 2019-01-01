

void handle_admin_message(char **parts) {
	if (parts[0] != 'admin') {
		exit;
	}


	if (parts[1] == 'login') {
		if (parts[2] && parts[3]) {
			char usename = parts[2];
			char password = parts[3];
			process_login(username, password);
		} else {
			exit('missing usename or password');
		}
	} else if (parts[1] == 'register') {
		if (parts[2] && parts[3]) {
			char usename = parts[2];
			char password = parts[3];
			process_registration(username, password);
		} else {
			exit('missing usename or password');
		}
	} else {
		printf('Invalid argument in message %s', parts[1]);
	}
}

void process_login(char usename, char password) {
	// existuje?

	// spravne heslo?

	// login
}

void process_registration(char usename, char password) {
	// existuje?

	// heslo vyhovuje?

	// register
}