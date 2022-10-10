#include <stdio.h>

/**
 * main - print the name of the file it was compiled from
 *
 * Return: the name of the file
 */
int main(void)
{
	printf("%s\n", _FILE_);
	return (0);
}
