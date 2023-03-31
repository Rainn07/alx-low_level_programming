#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * cap_string - capitalizes characters
 *
 * @str: input str
 *
 * Return: str with all CAPS
 */
char *cap_string(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if (i == 0 || isspace(str[i - 1]) || strchr(",;.!?\"(){}", str[i - 1]))
		{
			str[i] toupper(str[i]);
		}
		else
			str[i] = tolower(str[i]);
	}
	return (str);
}
