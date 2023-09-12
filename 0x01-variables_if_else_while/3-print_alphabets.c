#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase and uppercase
 * Return: Return 0 on sucess
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	letter = 'A';
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
