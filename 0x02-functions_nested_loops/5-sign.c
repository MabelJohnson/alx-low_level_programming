#include "main.h"

/**
 * print_sign - Check for lowercase character
 * @n: The character to be checked
 * Return: 1 for lowercase character or 0 for anything else
 */

int print_sign(int n)

{

	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
