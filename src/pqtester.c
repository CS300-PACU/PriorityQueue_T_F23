/****************************************************************************
 File name:  	pqtester.c
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
#include <math.h>

#define assert(cond, trueMsg, falseMsg) \
checkAssert(cond, trueMsg, falseMsg, __FILE__, __LINE__)


/****************************************************************************
 Function: 	 	success

 Description: print a success message

 Parameters:	szStr - the message to print

 Returned:	 	none
****************************************************************************/
static void success (char* szStr) {
	printf ("SUCCESS: %s\n", szStr);
}

/****************************************************************************
 Function: 	 	failure

 Description: print a failure message

 Parameters:	szStr - the message to print

 Returned:	 	none
 ****************************************************************************/
static void failure (char* szStr) {
	printf ("FAILURE: %s\n", szStr);
}

/****************************************************************************
 Function: 	 	checkAssert

 Description: if the expression is true, assert success; otherwise, assert
							failure
							DO NOT CALL THIS FUNCTION DIRECTLY
							use: assert(cond, trueMsg, falseMsg);

 Parameters:	szStr - the message to print

 Returned:	 	none
 ****************************************************************************/
static void checkAssert (bool bExpression, char* pTrue, char* pFalse, 
char *szFile, int line) {

	char *pStr;
	int fileAndLineLength;
	const int SPACES = 5; // " - " ':' '\0'

	fileAndLineLength = strlen(szFile) + (int) log(line);

	if (bExpression) {
		pStr = malloc(strlen(pTrue) + fileAndLineLength + SPACES);
		sprintf(pStr, "%s - %s:%d", pTrue, szFile, line);
		success (pStr);
	}
	else {
		pStr = malloc(strlen(pFalse) + fileAndLineLength + SPACES);
		sprintf(pStr, "%s - %s:%d", pFalse, szFile, line);
		failure (pStr);
	}
	free(pStr);
	fflush(NULL);
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

	puts ("Program Start\n");

	pqueueCreate (&sThePQ, sizeof(int));

	assert (pqueueCount (&sThePQ) == 0, "pqueueCount is 0",
																		 "pqueueCount is not 0");
/*
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

*/

	puts ("\nProgram End");

	return EXIT_SUCCESS;
}
