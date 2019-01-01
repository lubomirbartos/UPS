






void send_message(int socket, char *message){
	sent_bytes += send(socket, message, strlen(message)*sizeof(char), 0);
	odeslanych_zprav++;
}