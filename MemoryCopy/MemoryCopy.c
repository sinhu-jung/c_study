#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char szBuffer[12] = { "HelloWord" };
	char szNewBuffer[12] = { 0 };

	// memcpy�� �޸� �����ϴ� �Լ� �迭 ����� ���
	memcpy(szNewBuffer, szBuffer, 4);
	puts(szNewBuffer);

	memcpy(szNewBuffer, szBuffer, 6);
	puts(szNewBuffer);

	memcpy(szNewBuffer, szBuffer, sizeof(szBuffer));
	puts(szNewBuffer);

	return 0;
}