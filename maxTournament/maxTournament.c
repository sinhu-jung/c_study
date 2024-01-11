#include <stdio.h>

int main(void) {
	int a = 0, b = 0, c = 0;
	scanf_s("%d%d%d", &a, &b, &c);
	printf("Max: %d", a > b ? a > c ? a : c : b > c ? b : c);
	return 0;
}