#include <stdio.h>

int main(void) {
	int count = 0;
	scanf_s("%d", &count);

	if (count < 1 || count > 9) {
		puts("1~9사이 정수를 입력하세요.");
		return 0;
	}

	while (count > 0) {
		printf("* ");
		count--;
	}
	printf("\n");

	return 0;
}