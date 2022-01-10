#include <stdio.h>

int main()
{
	// déclaration des constante
	const int width = 100;
	const int height = 20;

	char grid[width][height];
	//tableau[0][0] = 'w';

	//initialiser le tableau
	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			grid[x][y] = ' ';
		}
	}

	//tracer le système d'AXE
	int center_y = height / 2;
	int center_x = width / 2;

	for (int x = 0; x < width; x++) {
		grid[x][center_y] = '-';
	}
	
	for (int y = 0; y < height; y++) {
		grid[center_x][y] = '|';
	}

	//aficher la grille dans la console
	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			printf("%c", grid[x][y]);
		}
		printf("\n");
	}

	return 0;
}
	