#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//return string -> current date and time
char* now(){
	time_t t;
	time(&t);
	return asctime(localtime(&t));
}

int main()
{
	char comment[80];
	char cmd[120];
	
	// fgets		-> unstructured text
	// comment 		-> to store text in the comment array
	// 80			-> room for length of 80 charachters
	// stdin		-> data will come from standard input (keyboard)
	fgets(comment, 80, stdin);
	
	// sprintf		-> print characters to a string
	// reports.log 	-> append comment to a file
	sprintf(cmd "echo '%s %s' >> reports.log", comment, now());
	
	// system		-> runs content of cmd string
	system(cmd);
	return 0;
}