#include<stdio.h>

/**
* print_lines - print sentences
*/
void myStartupFun(void) __attribute__((constructor));


/**
* print_lines - implementation of myStartupFun
*/

void print_lines(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

