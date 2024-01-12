#include <stdio.h>

int main(void) {
	// prob1
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			if (j >= 4 - i) {
				printf("* ");
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}

	// prob2
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < i + 5; ++j) {
			if (j >= 4 - i) {
				printf("* ");
			}
			else {
				printf("  ");
			}

		}
		printf("\n");
	}
	return 0;
}