#include <stdio.h>

int main(void) {
	int age = 0, fee = 1000;
	scanf_s("%d", &age);

	if (age <= 3) {
		fee -= 1000;
	}
	else if (age >= 4 && age <= 13) {
		fee -= (fee * 0.5);
	}
	else if (age >= 14 && age <= 19) {
		fee -= (fee * 0.25);
	}
	
	printf("����: %d, ���: %d\n", age, fee);
	return 0;
}