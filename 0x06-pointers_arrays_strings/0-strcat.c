#include <stdio.h>

/**
 * *_strcat - a fuucntion that concatentes two strings
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;

	for (i =0 ; *(dest + i) != '\0'; i++)
	{
		putchar(*(dest + i));
	}
	for ( i = 0; *(src + i) != '\0'; i++)
	{
		putchar(*(src + i));
	}
}


