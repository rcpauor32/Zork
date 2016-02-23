//#include "house.h"
#include <stdio.h>

void print_map(char* map[5][4], int posx, int posy) {
	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 4; x++) {
			if (map[y][x] == map[posy][posx])
				printf(" @ ");
			else 
				printf("%s", map[y][x]);
		}
		printf("\n");
	}
}