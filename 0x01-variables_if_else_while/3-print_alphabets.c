#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase, followed by a new line
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
