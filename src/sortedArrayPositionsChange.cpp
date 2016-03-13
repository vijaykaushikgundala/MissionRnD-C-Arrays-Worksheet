/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 anaced 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>
void  * sortedArrayPositionsChange(int *Arr, int len)
{
	int i, f = 0, a, b=0, swap = 0;
	if (Arr == NULL)
	{
		return NULL;
	}
	if (len < 0)
	{
		return NULL;
	}
	for (i = 0; i < len; i++)
	{
		if (f == 0 && Arr[i]>Arr[i + 1])
		{
			f = 1;
			a = i;
		}
		else
		if (Arr[i] > Arr[i + 1])
		{
			b = i+1;
			swap = Arr[a];
			Arr[a] = Arr[b];
			Arr[b] = swap;
		}
	}
	   swap=Arr[a];
	   Arr[a] = Arr[b];
	   Arr[b] = swap;
return Arr;
}
