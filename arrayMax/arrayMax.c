#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[5] = { 0 }, max = 0;

	for (int i = 0; i < _countof(arr); i++) 
		scanf_s("%d", &arr[i]);

	// prob1
	//for (int i = 0; i < _countof(arr); i++) 
	//	max = max > arr[i] ? max : arr[i];

	//printf("Max: %d", max);

	// prob2
	for (int i = 0; i < _countof(arr); i++) {
		for (int j = 0; j < _countof(arr); j++) {
			int s = 0;
			if (arr[i] < arr[j]) {
				s = arr[i];
				arr[i] = arr[j];
				arr[j] = s;
			}
		}

		for (int k = 0; k < _countof(arr); k++) {
			printf("%d ", arr[k]);
		}
		printf("\n");
	}

	printf("Min: %d", arr[0]);
	return 0;
}