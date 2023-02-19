#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (Success)
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if ((x == 'e') || (x == 'q'))
		{x++;
		}
		putchar(x);
		x++;
	}
	putchar(10);
	return (0);
}
