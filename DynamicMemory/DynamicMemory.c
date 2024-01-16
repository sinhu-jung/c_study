#include <stdio.h>
#include <stdlib.h>
#include <String.h>

int main(void) {
	int *pList = NULL, *pNewList = NULL;
	int aList[3] = { 0 };
		
	pList = (int*)malloc(sizeof(int) * 3); // 메모리 동적할당
	// 메모리 동적 할당을 하면 쓰레기값이 들어가 있기 때문에 문자열을 사용한다 하면 초기화 하는게 에러 방지에 좋다.
	memset(pList, 0, sizeof(int) * 3); //메모리 0으로 초기화

	pNewList = (int*)calloc(3, sizeof(int)); // 메모리 동적할당과 함께 초기화

	for (int i = 0; i < 3; i++)
		printf("pList[%d]의 값 : %d\n", i, pList[i]);
	for (int i = 0; i < 3; i++)
		printf("pNewList[%d]의 값 : %d\n", i, pNewList[i]);

	free(pList); // 메모리 반환
	free(pNewList);

	return 0;
}