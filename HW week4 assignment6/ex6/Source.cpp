#include <stdio.h>

void PrintHex(int* address, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf_s("%x\n", &address);
		address++;
	}
	return;
}

int main()
{
	char c = 'A';
	PrintHex(&c, sizeof(c));
	return 0;
}