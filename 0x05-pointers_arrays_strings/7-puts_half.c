#include <stdio.h>
/**
 *  puts_half - a function that prints haif of the string
 *  @str: pointer of characters
 */

void puts_half(char *s)
{
	int i = 1;
	while (*(s+i) != '\0')
	{
		i++;
	}
	if (i % 2== 0)
	{
		i = i/2;
		
		while (* (s+i)!= '\0')
		{
		
			putchar(*(s+i));
		i++;
		}
		putchar('\n');
	}

else
{

	i = (i-1)/2;
	while (* (s+i)!= '\0')
	{
		putchar(*(s+i));
		i++;
	}
	putchar('\n');

    }
}
