#include <stdio.h>

int main(void) {
	int count = 0;
	scanf_s("%d", &count);

	if (count < 1 || count > 9) {
		puts("1~9���� ������ �Է��ϼ���.");
		return 0;
	}

	while (count > 0) {
		printf("* ");
		count--;
	}
	printf("\n");

	return 0;
}