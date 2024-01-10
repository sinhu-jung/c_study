#include <stdio.h>

int main(void) {
	int initSecond = 0;

	printf("초를 입력해 주세요. : ");
	scanf_s("%d", &initSecond);

	printf("%d초는 %02d시간 %02d분 %02d초 입니다.", 
		initSecond, initSecond / 3600, (initSecond % 3600) / 60, initSecond % 60);
	return 0;
}