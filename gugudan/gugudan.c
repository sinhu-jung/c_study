#include <stdio.h>

int main(void) {
	int dan = 0, i, j;
	printf("�ܼ��� �Է��ϼ���: ");
	scanf_s("%d", &dan);

	while (dan < 1 || dan > 9) {
		printf("�߸� �Է� �ϼ̽��ϴ�. \n �ٽ� �Է� �� �ּ���: ");
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