#include <stdio.h>

int main(void) {
	int dan = 0, i, j;
	printf("단수를 입력하세요: ");
	scanf_s("%d", &dan);

	while (dan < 1 || dan > 9) {
		printf("잘못 입력 하셨습니다. \n 다시 입력 해 주세요: ");
		scanf_s("%d", &dan);
	}

	for (j = 1; j <= 9; j++) {
		for (i = 1; i <= dan; i++) {
			printf("%2d x %d = %2d  %c", i, j, i * j, 5);
		}
		printf("\n");
	}

	return 0;
}