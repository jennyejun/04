#include <stdio.h>

int main(int argc, char* argv[]) {
	int a, b;
	int c1, c2, c3;
	float c4, c5;

	printf("input two integers :");
	scanf_s("%i %i", &a, &b);

	c1 = a + b;
	c2 = a - b;
	c3 = a * b;
	c4 = a / b;
	c5 = a % b;

	printf("+ result is %d\n", c1);
	printf("- result is %d\n", c2);
	printf("* result is %d\n", c3);
	printf("/ result is %.f\n", c4);
	printf("%% result is %.f", c5);
}