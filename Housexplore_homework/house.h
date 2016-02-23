#ifndef _HOUSE_H_
#define _HOUSE_H_

#include <stdio.h>
#include <stdlib.h>

struct position {
	int x;
	int y;
};




char* house[5][4] = { "#", "#", "#", "#",
					"#", "kitchen", "pantry", "#",
					"#", "dinning room", "bathroom", "#",
					"#", "bedroom", "#", "#",
					"#", "#", "#", "#" };

char* house_map[5][4] = { " # ", " # ", " # ", " # ",
						" # ", "ki ", "pa ", " # ",
						" # ", "dr ", "bt ", " # ",
						" # ", "bd ", " # ", " # ",
						" # ", " # ", " # ", " # " };

void print_map(char* map[5][4], int posx, int posy);

#endif