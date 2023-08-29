
TARGETS=bin/scheduler bin/pqdriverpublic
VALGRIND_FLAGS=-v --leak-check=yes --track-origins=yes --leak-check=full --show-leak-kinds=all


all: ${TARGETS}

bin/scheduler: bin/pqueue.o bin/scheduler.o 
	gcc -o bin/scheduler -g -Wall bin/scheduler.o bin/pqueue.o 

bin/scheduler.o: src/scheduler.c include/pqueue.h
	gcc -o bin/scheduler.o src/scheduler.c -c -g -Wall


bin/pqdriverpublic: bin/pqueue.o bin/pqdriverpublic.o 
	gcc -o bin/pqdriverpublic -g -Wall bin/pqdriverpublic.o bin/pqueue.o 

bin/pqdriverpublic.o: src/pqdriverpublic.c include/pqueue.h
	gcc -o bin/pqdriverpublic.o src/pqdriverpublic.c -c -g -Wall

bin/pqueue.o: src/pqueue.c include/pqueue.h
	gcc -o bin/pqueue.o src/pqueue.c -c -g -Wall

valgrindDriver: bin/pqdriverpublic
	valgrind ${VALGRIND_FLAGS} bin/pqdriverpublic

clean:
	rm -rf ${TARGETS} bin/*.o bin/*.pdf
