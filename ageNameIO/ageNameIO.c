#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int age;
	char name[50] = { 0 };

	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d%*c", &age);

	printf("�̸��� �Է��ϼ���: ");
	gets_s(name, (unsigned)_countof(name));

	printf("����� ���̴� %d���̰� �̸��� \'%s\' �Դϴ�", age, name);

	return 0;
}