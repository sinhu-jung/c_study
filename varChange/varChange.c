#include <stdio.h>

int main(void) {
	int input1 = 0, input2 = 0, temp = 0;

	printf("�� ������ �Է� �� �ּ���: ");
	scanf_s("%d%d", &input1, &input2);

	temp = input1;
	input1 = input2;
	input2 = temp;

	printf("a: %d, b: %d", input1, input2);

	return 0;
}