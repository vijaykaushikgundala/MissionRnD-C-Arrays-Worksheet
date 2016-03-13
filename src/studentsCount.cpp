
/*
OVERVIEW:  Write a function that takes ascending sorted student's score array and tells how many number of students got more marks and how many students got less marks than the given student.
E.g.: Input array: [10, 20, 30, 40, 50], score: 30, lessCount value is 2 (10, 20 are less than 30), moreCount value is 2 (40, 50 are greater than 30).

INPUTS: Ascending sorted student marks array, length of the array, one student score, lessCount and moreCount are to be
used to store final results.

OUTPUT: Update lessCount and moreCount with number of students less than and more than given score.

ERROR CASES: Return NULL for invalid inputs.

NOTES:
*/

#include <stdio.h>

void * studentsCount(int *Arr, int len, int score, int *lessCount, int *moreCount) {
	int i,l=0,m=0;
	if (len < 0)
	{
		return NULL;
	}
	if (Arr == NULL)
	{
		return NULL;
	}
	for (i = 0; i < len; i++)
	{
		if (Arr[i]>score)
		{
			m++;
		}
		else
		if (Arr[i] < score)
		{
			l++;
		}
	}
	*lessCount = l;
	*moreCount = m;
}

