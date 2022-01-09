#include "Prime.h"
#include <stdio.h>

#define num_of_times 10

int main()
{
	for (int i = 0; i < num_of_times; i++)
	{
		printf_s(GetNextPrime());
	}
	return 0;
}