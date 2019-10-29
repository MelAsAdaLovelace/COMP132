
/*	This program finds and displays all the perfect and prime	 */
/*  numbers between 0 and a user specified integer N.			 */

#include <stdio.h> //header file included for printf, scanf
#include <math.h> //header file included for sqrt
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 10000  //global definition of MAX_SIZE as 10000
#define TRUE 1
#define FALSE 0

// global variables
// function  prototypes
int prime(int num);
int perfect(int num);
int findPrimes(int *primes, int N);
int findPerfects(int *perfects, int N);
void twoSum(int* primes, int prime_num, int N);

// main function
int main()
{
	int N, i, numPrimes, numPerfects, prime_numbers[MAX_SIZE], perfect_numbers[MAX_SIZE], check; //integer and array definition

	srand(time(NULL));
	do { //main loop
		numPrimes = 0; //initialization
		numPerfects = 0; //initialization

						 // get N from the user
		do {
			//get the integer
			printf("Enter an integer between 1 and %d ", MAX_SIZE);
			scanf("%d", &N);

			// error message for wrong input
			if (N<1 || N>MAX_SIZE)
			{
				printf("Invalid input... Try again!\n");
			}

		} while (N<1 || N>MAX_SIZE); //assuring that the entered integer is in the range 


									 //scan all integers from 1 to N
		numPrimes = findPrimes(prime_numbers, N);
		numPerfects = findPerfects(perfect_numbers, N);

		// display results
		printf("Prime numbers:\n");

		//display prime numbers
		for (i = 0; i < numPrimes - 1; i++)
		{
			printf("%d, ", prime_numbers[i]);
		}

		if (numPrimes>0)
			printf("%d\n", prime_numbers[i]);
		else
			printf("---\n");

		//display perfect numbers
		printf("Perfect numbers:\n");

		for (i = 0; i < numPerfects - 1; i++)
		{
			printf("%d, ", perfect_numbers[i]);
		}

		if (numPerfects>0)
			printf("%d\n", perfect_numbers[i]);
		else
			printf("---\n");

		printf("A test for writing a random number as sum of two primes: \n");
		twoSum(prime_numbers, numPrimes, N);

		printf("Do you want to continue? (0 for no, non-zero for yes): ");
		scanf(" %d", &check);

	} while (check != 0); //continue until 0 is entered

	printf("Bye.\n");

	return 0;

} // end of main


  // definition of fuction prime
int prime(int num)
{
	if (num < 2)
		return FALSE;
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return FALSE;
		}
	}
	return TRUE;
} // end of prime


  // definition of function perfect
int perfect(int num)
{
	int total = 0;
	for(int i = 2; i < sqrt(num); i++) {
		if (num % i == 0) {
			if (i == sqrt(num)) {
				total = total + i;
			}
			else {
				total = total + i + (num / i);
			}
		}
	}
	if (num == (total + 1) && num != 1) {
		return TRUE;
	}
	else
		return FALSE;
} // end of perfect

  // definition of function findPrimes
int findPrimes(int *primes, int N)
{
	int static size = 0;
	int index, lastPrime;
	if (size == 0) {
		lastPrime = 0;
	}
	else {
		lastPrime = primes[size - 1];
	}

	if (lastPrime <= N) {
		for (int i = lastPrime + 1; i < N; i++) {
			if (prime(i)) {
				primes[size++] = i;
			}
			index = size;
		}
	}
	else {
		for (int i = 0; primes[i] <= N; i++) {
			index = i;
		}
	}
	return index;
	
} // end findPrimes

  // definition of function findPerfects
int findPerfects(int *perfects, int N)
{
	int static size = 0;
	int index, lastPerfect;
	if (size == 0) {
		lastPerfect = 0;
	}
	else {
		lastPerfect = perfects[size - 1];
	}

	if (lastPerfect <= N) {
		for (int i = lastPerfect + 1; i < N; i++) {
			if (prime(i)) {
				perfects[size++] = i;
			}
			index = size;
		}
	}
	else {
		for (int i = 0; perfects[i] <= N; i++) {
			index = i;
		}
	}
	return index;
	
} //end findPerfects

  // definition of function twoSum
void twoSum(int *primes, int prime_num, int N)
{
	int target, *begin, *end;
	target = rand() % N + 1;
	printf("Target Number to write as sum of two primes is : %d\n", target);

	begin = primes;
	end = primes + prime_num - 1;

	while (begin <= end) {
		if ((*begin + *end) == target) {
			printf("%d + %d = %d\n", *begin, *end, target);
			return;
		}
		else if ((*begin + *end) < target) {
			begin++;
		}else{
			end--;
		}
	}
	printf("%d can not be written as sum of two primes.\n", target);
	return;

} //end twoSum