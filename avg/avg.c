#include <stdio.h>

int main(void) {
	int a = 0;
	int b = 0;

	printf("�� ������ �Է��ϼ���.: ");
	scanf_s("%d%d", &a, &b);

	printf("AVG: %.2f", (double)(a + b) / 2);

	return 0;
}