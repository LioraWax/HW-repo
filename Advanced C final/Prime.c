#include "Prime.h"
#include <stdlib.h>

#define zero 0


int GetNextPrime()
{
	//static unsigned int last_prime_generated;//allocating memory at 0x00000000 and cant read the memory location
	static unsigned int last_prime_generated=zero;
	unsigned int is_prime = 0;
	if (last_prime_generated==0)
	{
		last_prime_generated = 2;
		return last_prime_generated;
	}
	else
	{
		while (is_prime == 0)
		{
			is_prime = IsPrime(++last_prime_generated);
		}
		return last_prime_generated;
	}
}


int IsPrime(int number)
{
	int stop_deviding = number / 2 +1; //all devisions by numbers higher than number devided by 2 will be repititions of earlier devisions
	for (int i = 1; i < stop_deviding; i++)
	{
		if (number % i == 0)//if the number devides without a remainder than it is not a prime number
			return 0;//not a prime number
	}
	return 1;//prime number
}