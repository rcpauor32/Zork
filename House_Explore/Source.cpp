
#include "house.h"

int main(){

	int EXIT = 0;

	struct position player_pos;
	player_pos.x = 1;
	player_pos.y = 2;

	while (!EXIT) {

		printf("You are in the %s.\nNext move? (w/a/s/d/q):\n", house[player_pos.y][player_pos.x]);

		print_map(house_map, player_pos.x, player_pos.y);

		printf("\n");

		switch (getchar()) {
		case 'd': if (house[player_pos.y][player_pos.x + 1] != "#")
			player_pos.x++;
			break;			  

		case 'a': if (house[player_pos.y][player_pos.x - 1] != "#")
			player_pos.x--;
			break;

		case 'w': if (house[player_pos.y - 1][player_pos.x] != "#")
			player_pos.y--;
			break;

		case 's': if (house[player_pos.y + 1][player_pos.x] != "#")
			player_pos.y++;
			break;

		case 'q': EXIT = 1;
			break;

		default: printf("I don't recognize this input");
		}

		getchar(); //Skiped
		system("CLS");

	}

	return 0;
}