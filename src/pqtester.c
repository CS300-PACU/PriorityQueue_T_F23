/****************************************************************************
 File name:  	pqtester.c
 Author:     	chadd williams
 Date:       	June 8, 2022
 Class:			 	CS 300
 Assignment:	Priority Queue
 Purpose:			Test Basic PQ functionality
 ****************************************************************************/

#include "../include/pqueue.h"
#include "../include/driverUtil.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

/****************************************************************************
 Function: 	 	main

 Description: test all the functionality of the list

 Parameters:	none
 Returned:	 	none
 ****************************************************************************/

int main ()
{
	PriorityQueue sThePQ;
	int dataValue, priorityValue;
	int i;
	const int MAX_ITEMS = 4;
	const int PRIORITY_TWO = 2;

	puts ("Program Start\n");

	pqueueCreate (&sThePQ, sizeof(int));

	assert (pqueueCount (&sThePQ) == 0, "pqueueCount is 0");
/*
	assert (pqueueIsEmpty (&sThePQ), "pqueueIsEmpty");


	// priority 0-3
	for( i = 0; i < MAX_ITEMS; ++i)
	{
		pqueueEnqueue (&sThePQ, &i,  i);
	}

	assert (MAX_ITEMS == pqueueCount (&sThePQ), "pqueueCount is correct");


	// priority 0-3
	for( i = 0; i < MAX_ITEMS; ++i)
	{
		pqueueDequeue (&sThePQ, &dataValue,  &priorityValue);

		if( dataValue != i || priorityValue != i)
		{
			assert(dataValue == i && priorityValue == i, "Priority 0-3 error");
			printf("Priority: %d != %d \n", priorityValue, i);
		}
	}

	assert (pqueueCount (&sThePQ) == 0, "pqueueCount is 0");

	pqueueTerminate(&sThePQ);

*/

	puts ("\nProgram End");

	return EXIT_SUCCESS;
}
