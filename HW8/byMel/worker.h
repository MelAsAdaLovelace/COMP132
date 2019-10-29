#include <stdio.h>
#include <string.h>

enum deptcode { sales, finance, packing, engineering };
typedef enum deptcode DEPT;

static char *deptNames[] = { "Sales","Finance","Packing","Engineering" };

typedef struct Worker{
	int id;
	char name[30];
	int age;
	DEPT department;
	int salary;
	struct Worker *next;
} Worker;

typedef struct Worker *ListPtr;
void addWorker(ListPtr *listPtr, int id, char *name, int age, DEPT department, int salary);
void removeWorker(ListPtr *listPtr, int id);
void printWorkers(ListPtr workers);