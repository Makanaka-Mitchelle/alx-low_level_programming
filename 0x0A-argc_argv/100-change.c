#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0) {
		printf("0\n");
		return (0);
	}

	int minCoins = get_min_coins(cents);
	printf("%d\n", minCoins);

	return (0);
}
