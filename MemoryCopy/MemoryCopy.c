#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char szBuffer[12] = { "HelloWord" };
	char szNewBuffer[12] = { 0 };

	char* a = malloc(12);

	// string deep copy
	strcpy_s(a, 12, szBuffer);
	puts(a);
	free(a);
	// memcpy는 메모리 복사하는 함수 배열 복사시 사용
	memcpy(szNewBuffer, szBuffer, 4);
	puts(szNewBuffer);

	memcpy(szNewBuffer, szBuffer, 6);
	puts(szNewBuffer);

	memcpy(szNewBuffer, szBuffer, sizeof(szBuffer));
	puts(szNewBuffer);

	return 0;
}