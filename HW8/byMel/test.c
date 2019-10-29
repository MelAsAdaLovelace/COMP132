#include <stdio.h>

#include "worker.h"

int main()
{
	// Pointer to the start of the linked list WorkersList
	ListPtr WorkersList = NULL;

	printWorkers(WorkersList);

	addWorker(&WorkersList, 1111, "George", 25, 1, 3000); 
	addWorker(&WorkersList, 4444, "Carla", 30, 0, 5000);
	addWorker(&WorkersList, 2222, "Annie", 27, 3, 6000);
	addWorker(&WorkersList, 7777, "John", 41, 3, 7000);
	addWorker(&WorkersList, 5555, "Robbert", 33, 2, 4000);
	
	printf("\nAdded 5 workers to the list ....\n");
	printf("Current list: ..................\n");

	printWorkers(WorkersList);

	removeWorker(&WorkersList, 2222);
	printf("\n\nRemoved worker 2222 from the list ....\n");
	printf("Current list: .........................\n");
	printWorkers(WorkersList);
	
	removeWorker(&WorkersList, 1111);
	printf("\n\nRemoved worker 1111 from the list ....\n");
	printf("Current list: ............................\n");
	printWorkers(WorkersList);

	addWorker(&WorkersList, 3333, "Alice", 45, 3, 5000);
	printf("\n\nAdded worker 3333 to the list ....\n");
	printf("Current list: ............................\n");
	printWorkers(WorkersList);
		
	getchar();
	return 0;
}