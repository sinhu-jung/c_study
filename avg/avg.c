#include <stdio.h>

int main(void) {
	int a = 0;
	int b = 0;

	printf("두 정수를 입력하세요.: ");
	scanf_s("%d%d", &a, &b);

	printf("AVG: %.2f", (double)(a + b) / 2);

	return 0;
}