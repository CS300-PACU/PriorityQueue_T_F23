/**************************************************************************
 File name:		  pqueue.c
 Author:        
 Date:          
 Class:         CS300
 Assignment:    Priority Queue Implementation
 Purpose:       This file defines the constants, data structures, and
                function prototypes for implementing a priority queue data
                structure.
 *************************************************************************/

#include "../include/pqueue.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**************************************************************************
 Function: 	 	processError - DO NOT EDIT


 Description: Print the filename and line number of an error

 Parameters:	szFile - filename
              line - the line number

 Returned:	 	None
 *************************************************************************/
void processError(const char* szFile, const int line)
{
  fprintf(stderr, "ERROR: %s: %d\n", szFile, line);
  fflush(NULL);
  exit(EXIT_FAILURE);
}


void pqueueCreate (PriorityQueuePtr psQueue, size_t itemSize)
{

}

void pqueueTerminate (PriorityQueuePtr psQueue)
{

}

int pqueueCount (const PriorityQueuePtr psQueue)
{
	return 0;
}

bool pqueueIsEmpty (const PriorityQueuePtr psQueue)
{
	return false;
}

bool pqueueIsFull(const PriorityQueuePtr psQueue)
{
	return false;
}

bool pqueueEnqueue (PriorityQueuePtr psQueue, const void *pBuffer,
										 int priority)
{

}

bool pqueueDequeue (PriorityQueuePtr psQueue, void *pBuffer,
														int  *pPriority)
{
	return NULL;
}

bool pqueuePeek (PriorityQueuePtr psQueue, void *pBuffer,
								 int *priority)
{
	return NULL;
}

bool pqueueChangePriority (PriorityQueuePtr psQueue,
																	int change)
{
	
}
