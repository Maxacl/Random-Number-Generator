
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	int ranNum;

	printf("Welcome to Random Number Generator!\n\nYour random number is:\n\n");

	srand(time(0));
	ranNum = rand();

	printf("\t%d\n\n", ranNum);

	if (ranNum % 2 == 0) {
		printf("This is a random even number\n");
	}
	else {
		printf("This is a random odd number\n");
	}
	return 0;

}