#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[5] = { 0 }, idxMin = 0;

	for (int i = 0; i < _countof(arr); i++)
		scanf_s("%d", &arr[i]);

	for (int i = 0; i < _countof(arr); ++i) {
		idxMin = i;
		for (int j = i + 1; j < _countof(arr); ++j) {
			if (arr[idxMin] > arr[j]) {
				idxMin = j;
			}
		}

		if (idxMin != i) {
			int s = arr[i];
			arr[i] = arr[idxMin];
			arr[idxMin] = s;
		}

		for (int k = 0; k < _countof(arr); k++)
			printf("%d ", arr[k]);

		printf("\n");
	}

	return 0;
}