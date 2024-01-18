#include <stdio.h>
#include <stdlib.h>

typedef struct USERDATA 
{
	char szName[32];
	char szPhone[32];
	struct USERDATA* pNext;
} USERDATA;

void printStruct(USERDATA *user) {
	printf("%s, %s\n", user->szName, user->szPhone);
	if (user->pNext == NULL) {
		return;
	}
	printStruct(user->pNext);
}

int main(void) {
	USERDATA userList[4] = {
		{ "±èµÎ½Ä", "1234", NULL},
		{ "ÀÌ¹ÌÇö", "2345", NULL},
		{ "±èºÀ¼®", "3456", NULL},
		{ "ÀåÈñ¼ö", "4567", NULL},
	};

	int listCount = _countof(userList);
	for (int i = 0; i < listCount; i++) {
		if (i + 1 == listCount) {
			break;
		}
		userList[i].pNext = &userList[i + 1];
	}

	printStruct(&userList[0]);
	return 0;
}