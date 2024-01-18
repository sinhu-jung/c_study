#include <stdio.h>
/**
* 1바이트(8비트) 정보를 쉽게 잘라 쓰기 위한 문법
* 멤버는 비트 단위 데이터
* 멤버 선언 시 먼저 기술한 멤버는 8비트중 오른쪽 부터 적용
*/
typedef struct _DATAFLAG
{
	unsigned char main : 1;
	unsigned char left : 2;
	unsigned char right : 3;
	unsigned char top : 2;
} DATAFLAG;

int main(void) {
	DATAFLAG flagSwitch = { 0, 3, 7, 4};

	printf("%d\n", flagSwitch.main);
	printf("%d\n", flagSwitch.left);
	printf("%d\n", flagSwitch.right);

	printf("%d\n", flagSwitch.top);
	printf("%X\n", *((unsigned char*)&flagSwitch));
	printf("%zd\n", sizeof(flagSwitch));
	return 0;
}