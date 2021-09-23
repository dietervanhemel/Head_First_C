#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	//char *my_env		-> create set of environment vars as an array of string pointers
	// "JUICE=..."		-> each var in the environment is name=value
	// NULL				-> last item in array must be NULL
	// char *my_env[] = {"JUICE=peach and apple", NULL};
	
	// execle 			-> passes a list of arguments and environment
	// my_env 			-> contains the environment
	// execle("diner_info", "diner_info", "4", NULL, my_env);
	
	printf("Diners: %s\n", argv[1]);
	printf("Juice: %s\n", getenv("JUICE"));
}