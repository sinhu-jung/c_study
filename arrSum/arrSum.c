#include <stdio.h>

int main(void) {
	int aList[3][4] = {
		{10, 20 ,30},
		{40, 50, 60}
	}, a[5][5] = { 0 };

	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 4; j++) {
			if (j == 3) {
				aList[i][j] = sum;
			}
			else {
				sum += aList[i][j];
			}
		}
	}

	for (int i = 0; i < 4; i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++) {
			if (j == 2) {
				aList[j][i] = sum;
			}
			else {
				sum += aList[j][i];
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			a[i][j] = (i * 5 + 1) + j;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", aList[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}