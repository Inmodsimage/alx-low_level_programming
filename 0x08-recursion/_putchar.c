#include <unistd.h>

/**
 * Here is my own _putchar.c
 */

int _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}	
