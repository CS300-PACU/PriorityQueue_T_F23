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
