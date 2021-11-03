#include <stdio.h>

int returnSum(int arr[])
{
	int counter = 0, sum = 0;
	while (arr[counter] != NULL)
	{
		sum += arr[counter];
		counter++;
	}
	return sum;
}

void sort(int* arr)
{
	int counter = 0, helper, items = 0;
	while (arr[counter] != NULL)
	{
		helper = counter;
		int firstTime = 0;
		if (firstTime = 0)
		{
			firstTime = 1;
			while (arr[counter] != NULL)
			{
				items++;
				if (arr[helper] > arr[helper + 1])
				{
					int temp = arr[helper];
					arr[helper] = arr[helper + 1];
					arr[helper + 1] = temp;
				}
				helper++;
			}
			items = items - 1;

		}
		else
		{
			for (int i = 0; i < items - counter - 1; i++)
			{
				if (arr[helper] > arr[helper + 1])
				{
					int temp = arr[helper];
					arr[helper] = arr[helper + 1];
					arr[helper + 1] = temp;
				}
				helper++;
			}
		}

		counter++;
	}
	return;
}

int Fibonacci(int num)
{
	int ans = 0, last = 0;
	for (int i = 1; i < num; i++)
	{
		if (ans == 0)
		{
			last = ans;
			ans = 1;
		}
		else
		{
			ans = ans + last;
			last = ans - last;
		}
	}
	return ans;
}

int transpose(int* mat[], int rows, int columns)
{
	int temp, symmetric = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (mat[i][j] != mat[j][i])
			{
				temp = mat[i][j];
				mat[i][j] = mat[j][i];
				mat[j][i] = temp;
			}
			else
			{
				symmetric = 1;
			}

		}
	}
	return symmetric;
}
