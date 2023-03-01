#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to be capitalized.
 *
 * Return: a pointer to the changed string.
 */

char *cap_string(char *str)
{
	int alpha = 0;

	while (str[alpha])
	{
		while (!(str[alpha] >= 'a' && str[alpha] <= 'z'))
			alpha++;

		if (str[alpha - 1] == ' ' ||
		    str[alpha - 1] == '\t' ||
		    str[alpha - 1] == '\n' ||
		    str[alpha - 1] == ',' ||
		    str[alpha - 1] == ';' ||
		    str[alpha - 1] == '.' ||
		    str[alpha - 1] == '!' ||
		    str[alpha - 1] == '?' ||
		    str[alpha - 1] == '"' ||
		    str[alpha - 1] == '(' ||
		    str[alpha - 1] == ')' ||
		    str[alpha - 1] == '{' ||
		    str[alpha - 1] == '}' ||
		    alpha == 0)
			str[alpha] -= 32;

		alpha++;
	}

	return (str);
}
