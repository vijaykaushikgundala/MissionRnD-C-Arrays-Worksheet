/*
OVERVIEW:  You are given scores for students of a class in alphabetical order. Write a function that sorts these scores in descending order.
Input is array of structures of type student (each student has name and score).
E.g.: If input is [ { "stud1", 20 }, { "stud2", 30 }, { "stud3", 40 } ] (three students with marks 20, 30 , 40).
Output for this will be [ { "stud3", 40 }, { "stud2", 30 }, { "stud1", 20 } ]

INPUTS: Array of structures of type student, length of array.

OUTPUT: Sort the array in descending order of scores.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

struct student {
	char name[10];
	int score;
}t;

void * scoresDescendingSort(struct student *students, int len) {
	int i ,j;
	if (students == NULL)
	{
		return NULL;
	}
	if (len < 0)
	{
		return NULL;
	}
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (students[i].score > students[j].score)
			{
				t = students[i];
				students[i] = students[j];
				students[j] = t;
			}
		}
	}
	return students;
}