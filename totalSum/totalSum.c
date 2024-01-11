#include <stdio.h>

int main(void) {
	int input = 0, total = 0;
	scanf_s("%d", &input);
	total += input;
	scanf_s("%d", &input);
	total += input;
	scanf_s("%d", &input);
	total += input;
	printf("Total: %d\n", total);
	return 0;
}