#include <stdio.h>

int main(int argc, char* argv[]) {
	int year;

	printf("input the year :");
	scanf_s("%i", &year);

	printf("is the year %d the leap year? : %i", year, ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}