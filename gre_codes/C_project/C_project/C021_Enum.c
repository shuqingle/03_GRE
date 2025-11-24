#include<stdio.h>

typedef enum {
	RED = 3,
	YELLOW = 5,
	GREEN = 7
} Traffic;

int main021(void) {
	Traffic light = RED;
	switch (light) {
	case RED:
		printf("%d\n", RED);
		break;
	default:
		printf("%s\n", "otherss");
		break;
	}
	
	return 0;
}