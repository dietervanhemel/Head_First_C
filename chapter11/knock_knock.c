#include <sys/socket.h>
#include <arpa/inet.h>

// 1. Bind to a port
struct sockaddr_in name;
name.sin_family= PFP_INET;
name.sin_port = (in_port_t)htons(30000);
name.sin_addr.s_addr = htonl(INADDR_ANY);
int c bind ( listener_d, (struct sockaddr *) &name, sizeof(name));
if(c == -1)
	error("Can't bind to socket");
	
// 2. Listen
if(listen(listener_d, 10) == -1)
	error("Can't listen");

// 3. Accept a connection
stuct sockaddr_storage client_addr;
unsigned int address_size = sizeof(client_addr);
int connect_d = accept(listener_d, (struct sockaddr *) &client_addr, &address_size; // connection descriptor
if (connect_d == -1)
	error("Can't open secondary socket");


char *msg = "Internet Knock-Knock Protocol Server\r\nVersion 1.0\r\nKnock! Knock!\r\n> ";
if (send(connect_d, msg, strlen(msg),0) == -1)
	error("send");
int main(){
	
	int listener_d = socket(PF_INET, SOCK_STREAM, 0);
	if (listener_d == -1)
		error("Can't open socket");
	return 0;
}