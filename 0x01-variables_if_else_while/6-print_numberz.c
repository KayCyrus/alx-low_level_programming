#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x + '0');
	}
	putchar(10);
	return (0);
}
