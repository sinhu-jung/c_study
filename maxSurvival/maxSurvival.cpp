#include <stdio.h>

int main(void) {
	int input = 0, result = 0;

	scanf_s("%d", &input);
	result = input;
	scanf_s("%d", &input);
	result = result > input ? result : input;
	scanf_s("%d", &input);
	result = result > input ? result : input;

	printf("MAX: %d", result);
	return 0;
}