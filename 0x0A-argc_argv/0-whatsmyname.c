#include "main.h"

/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array of command line arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		print_program_name(argv);
	}

	return (0);
}
