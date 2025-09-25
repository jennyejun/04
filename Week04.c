#include <stdio.h>

int main(int argc, char* argv[]) {
	int sec1, min, sec2;

	printf("input the second :");
	scanf_s("%i", &sec1);

	min = sec1 / 60;
	sec2 = sec1 % 60;

	printf("the time is %d : %d", min, sec2);
}