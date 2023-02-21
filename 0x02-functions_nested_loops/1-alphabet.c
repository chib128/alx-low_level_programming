/*
 * File: 1-alphabet.c
 * Auth: Brian Chibisa
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * print_alphabet - Make the aphabet
 * Return: void
*/
int main(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
