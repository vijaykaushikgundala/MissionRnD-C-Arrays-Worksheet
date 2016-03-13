/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

Ex 2: [4,4,2,2,1,5] output : [4,2,1,5]

INPUTS: Integer array and length of the array .

OUTPUT: Update input array by removing duplicate values and return the final array length

ERROR CASES: Return -1 for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>

int removeArrayDuplicates(int *Arr, int len)
{
	int i, j,count=0,a,b;
	if (len < 0)
	{
		return -1;
	}
	if (Arr == NULL)
	{
		return -1;
	}
	for (i = 0; i < len; i++)
	{
		for (j = i+1; j < len; j++)
		{
			if (Arr[j] == Arr[i])
			{
				Arr[j] = -10000;
			}
		}
	}
	for (i = 0; i < len; i++)
	{
		if (Arr[i] != -10000)
		{
			count++;
		}
	}
	for (i = 0; i < len; i++)
	{
		if (Arr[i] == -10000)
		{
			a = i+1;
			while (Arr[a] == -10000 && a<len)
			{
				a=a+1;
			}
			Arr[i] = Arr[a];
			Arr[a] = -10000;
		}
	}
	return count;
}