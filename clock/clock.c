#include <stdio.h>

int main(void) {
	int initSecond = 0;

	printf("�ʸ� �Է��� �ּ���. : ");
	scanf_s("%d", &initSecond);

	printf("%d�ʴ� %02d�ð� %02d�� %02d�� �Դϴ�.", 
		initSecond, initSecond / 3600, (initSecond % 3600) / 60, initSecond % 60);
	return 0;
}