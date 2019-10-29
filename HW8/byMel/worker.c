#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "worker.h"

void addWorker(ListPtr *listPtr, int id, char *name, int age, DEPT department, int salary) {
	ListPtr curr = *listPtr, newWorkerPtr;

	newWorkerPtr = (ListPtr)(malloc(sizeof(Worker)));

	newWorkerPtr->age = age;
	newWorkerPtr->department = department;
	newWorkerPtr->id = id;
	newWorkerPtr->salary = salary;
	strcpy(newWorkerPtr->name, name);
	newWorkerPtr->next = NULL;
	if (*listPtr == NULL) {
		*listPtr = newWorkerPtr;
		return;
	}
	while (curr->next != NULL) {
		curr = curr->next;
	}
	curr->next = newWorkerPtr;
}
void removeWorker(ListPtr *listPtr, int id) {
	ListPtr curr = *listPtr;
	ListPtr worker, prev;
	if (curr == NULL) {
		printf("this list is empty..\n");
		return;
	}

	worker = curr;
	if (worker->id == id) {
		*listPtr = worker->next;
		free(worker);
		return;
	}
	while (curr->next != NULL) {
		prev = curr;
		curr = curr->next;
		if (curr->id == id) {
			prev->next = curr->next;
			free(curr);
			return;
		}
	}
	printf("The worker is not found in the list \n");


}
void printWorkers(ListPtr workers)
{
	if (workers == NULL)
		printf("The list is empty. No workers in the list.\n");

	while (workers != NULL)
	{
		printf("\n======== %d   %s\t========", workers->id, workers->name);
		printf("\nAge:\t %d", workers->age);
		printf("\nDept:\t %s", deptNames[workers->department]);
		printf("\nSalary:\t %d", workers->salary);
		printf("\n================================");
		workers = workers->next;
	}
}
