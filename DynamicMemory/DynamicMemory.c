#include <stdio.h>
#include <stdlib.h>
#include <String.h>

int main(void) {
	int *pList = NULL, *pNewList = NULL;
	int aList[3] = { 0 };
		
	pList = (int*)malloc(sizeof(int) * 3); // �޸� �����Ҵ�
	// �޸� ���� �Ҵ��� �ϸ� �����Ⱚ�� �� �ֱ� ������ ���ڿ��� ����Ѵ� �ϸ� �ʱ�ȭ �ϴ°� ���� ������ ����.
	memset(pList, 0, sizeof(int) * 3); //�޸� 0���� �ʱ�ȭ

	pNewList = (int*)calloc(3, sizeof(int)); // �޸� �����Ҵ�� �Բ� �ʱ�ȭ

	for (int i = 0; i < 3; i++)
		printf("pList[%d]�� �� : %d\n", i, pList[i]);
	for (int i = 0; i < 3; i++)
		printf("pNewList[%d]�� �� : %d\n", i, pNewList[i]);

	free(pList); // �޸� ��ȯ
	free(pNewList);

	return 0;
}