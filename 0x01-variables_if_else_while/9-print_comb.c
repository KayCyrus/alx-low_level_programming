#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 0; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
