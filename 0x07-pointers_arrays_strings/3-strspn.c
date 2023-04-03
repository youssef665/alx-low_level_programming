#include <stdio.h>

/**
 * _strspn - a function that gets the lenght of  a prefix substring
 * @s: pointer to character argument
 * @accept: pointer to character argument
 *
 * Return: the lenght of  a prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int n;
	unsigned int counter;

	for (n = 0; *(accept + n) != '\0'; n++)
	{
		for (t = 0; *(s + t) != '\0'; t++)
		{
			if (*(accept + i) == *(s + i))
			{
				counter++;
			}
		}
	}

	return (counter);
}


