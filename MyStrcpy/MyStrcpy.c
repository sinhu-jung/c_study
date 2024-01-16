#include<stdio.h>
#include<string.h>

void myStrcpy(char* origin, unsigned int size, char* copy) {
	size_t nLenSrc = 0;
	nLenSrc = strlen(origin);

	for (int i = 0; i < nLenSrc; ++i) {
		copy[i] = origin[i];
	}
}

int main(void) {
	char szBufferSrc[12] = { "TestString" };
	char szBufferDst[12] = { 0 };

	myStrcpy(szBufferSrc, sizeof(szBufferDst), szBufferDst);
	puts(szBufferDst);
	return 0;
}