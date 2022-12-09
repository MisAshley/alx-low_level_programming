#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{

	char lc;

	for (lc = 'a'; lc <= 'z'; lc++);
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
