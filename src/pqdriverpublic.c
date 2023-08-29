/****************************************************************************
 File name:  	pqdriverpublic.c
 Author:     	chadd williams
 Date:       	June 8, 2022
 Class:			 	CS 300
 Assignment:	Priority Queue
 Purpose:			Test Basic PQ functionality
 ****************************************************************************/

#include "../include/pqueue.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/****************************************************************************
 Function: 	 	success

 Description: print a success message

 Parameters:	szStr - the message to print

 Returned:	 	none
 ****************************************************************************/
static void success (char * szStr)
{
	printf ("SUCCESS: %s\n", szStr);
}

/****************************************************************************
 Function: 	 	failure

 Description: print a failure message

 Parameters:	szStr - the message to print

 Returned:	 	none
 ****************************************************************************/
static void failure (char * szStr)
{
	printf ("FAILURE: %s\n", szStr);
}

/****************************************************************************
 Function: 	 	assert

 Description: if the expression is true, assert success; otherwise, assert
 	 	 	 	 	 	 	failure

 Parameters:	szStr - the message to print

 Returned:	 	none
 ****************************************************************************/
static void assert (bool bExpression, char *pTrue, char *pFalse)
{
	if (bExpression)
	{
		success (pTrue);
	}
	else
	{
		failure (pFalse);
	}
}

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
	const int PQ_SIZE = 100;

	puts ("Program Start\n");


	pqueueCreate (&sThePQ, PQ_SIZE, sizeof(int));
	success ("PQ Create");

	assert (pqueueCount (&sThePQ) == 0, "pqueueCount is 0",
																		 "pqueueCount is not 0");

	assert (pqueueIsEmpty (&sThePQ), "pqueueIsEmpty", "!pqueueIsEmpty");


	// priority 0-3
	for( i = 0; i < MAX_ITEMS; ++i)
	{
		pqueueEnqueue (&sThePQ, &i,  i);
	}

	assert (MAX_ITEMS == pqueueCount (&sThePQ), "pqueueCount is correct",
																		 "pqueueCount is not correct");


	// priority 0-3
	for( i = 0; i < MAX_ITEMS; ++i)
	{
		pqueueDequeue (&sThePQ, &dataValue,  &priorityValue);

		if( dataValue != i || priorityValue != i)
		{
			assert(dataValue == i && priorityValue == i, "",
					"Priority 0-3 error");
			printf("Priority: %d != %d \n", priorityValue, i);
		}
	}

	assert (pqueueCount (&sThePQ) == 0, "pqueueCount is 0",
																		 "pqueueCount is not 0");

	pqueueTerminate(&sThePQ);

	success ("PQ Terminate");


	puts ("\nProgram End");

	return EXIT_SUCCESS;
}
