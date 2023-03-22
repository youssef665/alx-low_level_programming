#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 *
 * function to print the alphaet
 */

void printalphabet(char i)
{

	
	while (i < 'z')
	{
		putchar(i);
		i++;
	}
		putchar('\n');


}



int main(void)
{
	char z = 'a';
	printalphabet(z);



	return (0);
}
