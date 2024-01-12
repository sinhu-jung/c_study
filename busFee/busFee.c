#include <stdio.h>

int main(void) {
	int age = 0, fee = 1000;
	scanf_s("%d", &age);
	if (age < 20) {
		fee -= (fee * 0.25);
	}
	else {
		age = 20;
	}

	printf("나이: %d, 최종요금: %d", age, fee);
	return 0;
}