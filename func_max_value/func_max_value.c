#include <stdio.h>

void getValue(int * a) {
	printf("정수 3개를 입력 하세요: ");
	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &a[i]);
	}
}

int getMax(int *value) {
	int max = 0;
	for (int i = 0; i < 3; i++) {
		max = value[i] > max ? value[i] : max;
	}
	return max;
}

int main(void) {
	int a[3] = { 0 };
	getValue(a);
	int max =  getMax(a);
	printf("최댓값: %d\n", max);
	return 0;
}