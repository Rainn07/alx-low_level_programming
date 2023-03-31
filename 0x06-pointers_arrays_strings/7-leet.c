#include <string.h>
#include "main.h"
/**
 * leet - function that encodes string into 1337
 *
 * @str: input string
 *
 * Return: Encoded str
 */
char *leet(char *str)
{
	char *vowel = "aeotl";
	char *leet_characters = "4433771100";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; vowel[j] != '\0'; j++)
		{
			if (str[i] == vowel[j] || str[i] == toupper(vowel[j]))
			{
				str[i] = leet_characters[j];
				break;
			}
		}
	}
	return (str);
}
