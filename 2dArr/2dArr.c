#include <stdio.h>

int main(void) {
	int a[5][5] = { 0 };

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i % 2 == 1) {
				a[i][5 - j - 1] = (i * 5 + 1) + j;
			}
			else {
				a[i][j] = (i * 5 + 1) + j;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}