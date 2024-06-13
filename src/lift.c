// Assume 16 floors and 8 elevators in a building. You are on floor X, which lift should come to you?
#include <stdio.h>
struct lift {
	int free; // 0 for occupied, 1 for free
	int dirn; // 0 for up and 1 for down
	int currentFloor;
	int targetFloor;
}

void main() {
	// Inputs
	int liftNo;
	printf("Enter number of lifts");
	scanf("%d\n",&liftNo);
	struct lift lifts[liftNo];
}
