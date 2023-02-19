#include <stdio.h>

/**
 * main	- entry point
 * Return: 0 (successs)
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x += 1;
	}
	putchar(10);
	return (0);
}
