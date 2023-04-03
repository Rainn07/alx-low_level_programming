#include "main.h"
/**
 * _strspn - finds the length of a prefix substring
 *
 * @s: str to be searched
 * @accept: str to be found in @s
 *
 * Return: Number of bytes in initial segment of s
 * which consists of only bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int index = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		/*iterating through str*/
		if (s[i] != 32)
		{
			/*checking for spaces ASCII*/
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					index++;
			}
		}
		else
			return (index);
	}
	return (index);
}
