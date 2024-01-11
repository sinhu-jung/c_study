#include <stdio.h>

int main(void) {
	int input1 = 0, input2 = 0, result = 0;

	scanf_s("%d%d", &input1, &input2);

	result = input1 + (~input2 + 1);

	printf("°á°ú: %d", result);

	return 0;
}