#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
