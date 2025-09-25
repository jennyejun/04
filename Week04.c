#include <stdio.h>

int main(int argc, char* argv[]) {
	int sec1, hour, min, sec2;

	printf("input the second : ");
	scanf_s("%i", &sec1);

	hour = sec1 / 3600;
	min = (sec1 - hour * 3600) / 60;
	sec2 = sec1 % 60;

	printf("The time for %d second is %d : %d: %d", sec1, hour, min, sec2);

	return 0;
}