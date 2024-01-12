#include <stdio.h>

int main(void) {
	int total = 0;
	//for
	//for (int i = 1; i < 11; i++) {
	//	total += i;
	//}

	//while
	int i = 1;
	while (i < 11) {
		total += i;
		i++;
	}

	printf("Total: %d\n", total);
	return 0;
}