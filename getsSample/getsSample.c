#include <stdio.h>

int main(void) {

	char szName[32] = { 0 };

	printf("�̸��� �Է��ϼ���: ");
	gets_s(szName, 32);

	printf("����� �̸��� ");
	puts(szName);
	puts("�Դϴ�.");
	return 0;
}