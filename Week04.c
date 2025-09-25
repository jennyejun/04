#include <stdio.h>

int main(int argc, char* argv[]) {
	unsigned int myNum;
	int count;

	printf("input a number : ");
	scanf_s("%ui", &myNum);

	for (count = 0; myNum != 0; myNum >>= 1) {
		if (myNum & 1) count++;
	}

	printf("The result is : %i", count);

	return 0;
}