#include<stdio.h>
#include<string.h>

int main(void) {
	char szBuffer[32] = { "I am a boy" };

	printf("%p\n", szBuffer);

	// strstr함수는 기준 주소 반환
	printf("%p\n", strstr(szBuffer, "am"));
	printf("%p\n", strstr(szBuffer, "boy"));

	// 인덱스
	printf("Index : %d\n", strstr(szBuffer, "am") - szBuffer);
	printf("Index : %d\n", strstr(szBuffer, "boy") - szBuffer);

	return 0;
}