#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 *
 * function to print the alphaet
 */

void printalphabet(char l)
{
	int i = 'a';
	
	while (i < 'z')
	{
		puthcar(i);
		i++;
	}
		putchar('\n');


}



int main(void)
{
	char z;
	printalphabet(z);



	return (0);
}
