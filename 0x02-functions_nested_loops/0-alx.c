#include "alx.h"

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char *alx;

	for (alx = "Alx\n"; *alx != '\0'; ++alx)
		_putchar(*alx);
	return (0);
}
