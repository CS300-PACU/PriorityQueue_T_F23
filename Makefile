#############################################################################
# File name:  Makefile
# Author:     WRITE YOUR NAME HERE
# Date:       WRITE THE DATE HERE
# Class:      CS300
# Assignment: Priority Queue
# Purpose:    Learn about makefiles!
#############################################################################

CC=gcc
CFLAGS=-g -Wall
VALGRIND_FLAGS=-v --leak-check=yes --track-origins=yes --leak-check=full \
--show-leak-kinds=all
ENSCRIPT_FLAGS=-C -T 2 -p - -M Letter --color -fCourier8


TARGETS=bin/pqtester bin/scheduler

all: ${TARGETS}

bin/driverUtil.o: src/driverUtil.c include/driverUtil.h
	${CC} ${CFLAGS} -c -o bin/driverUtil.o src/driverUtil.c 

# DO NOT ALTER ANY CODE ABOVE THIS POINT EXCEPT THE COMMENT

# look at Makefile in your STACK assignment
# for a guide.
# in particular, look at how bin/stk.o, bin/stkdriver.o
# and bin/stkdriver all work together.

# Format:
# TARGET: DEPENDENCIES
# <TAB>COMMAND

# TODO: Fill in the dependencies and rule here
bin/pqueue.o:


# TODO: Fill in the dependencies and rule here
bin/pqtester.o:


# TODO: Fill in the dependencies and rule here
# don't forget to use -lm
bin/pqtester:


# TODO: Fill in the dependencies and rule here
bin/scheduler.o:


# TODO: Fill in the dependencies and rule here
bin/scheduler:


# TODO: Fill in the dependencies and rule here
# use the STACK makefile as a guide
# Your PDF must be in this order:
# pqueue.c
# scheduler.c
# pqtester.c
# Makefile
printAll:


# clean is done for you
clean:
	rm -rf bin/*.o ${TARGETS} bin/*.pdf
	
	
# valgrindScheduler is done for you
valgrindScheduler: bin/scheduler
	valgrind ${VALGRIND_FLAGS} bin/scheduler
	

# TODO: use valgrindScheduler as a guide
valgrindTester:
