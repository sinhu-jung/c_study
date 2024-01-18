#include <stdio.h>

int main(void) {
	FILE* fp = NULL;
	fopen_s(&fp, "Test.txt", "w");
	if (fp == NULL) {
		puts("ERROR: Failed to open file!");
		return;
	}

	fprintf(fp, "%s\n", "Hello");

	fclose(fp);
	return 0;
}