#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase except q and e
 * Return: Return 0 on sucess
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
