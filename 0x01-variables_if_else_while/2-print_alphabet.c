#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - return alphabets
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= '2')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
