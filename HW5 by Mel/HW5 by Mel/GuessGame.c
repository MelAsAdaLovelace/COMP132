#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int times = 8;
void startgame();

int main() {
	startgame();
	return 0;

}

void startgame() {
	int number = 1 + (rand() % 100);
	int startG;
	do {
		srand(time(NULL));
		printf("Welcome to the Guess the Number Game!!!\nYou have %d chances to guess the number I keep in my mind.\nThe number is between 1 and 100.\nGOOD LUCK!!!", times);
		for (int i = 0; i < 8; i++) {
			printf("You have %d guesses left.\n", times);
			int guess;
			printf("Press enter your guess:");
			scanf("%d", &guess);
			if (guess < number) {
				printf("Your guess %d is lower than the number. Please go higher!!\n", guess);
				--times;
				continue;
			}
			else if (guess > number) {
				printf("Your guess %d is higher than the number. Please go lower!!\n", guess);
				--times;
				continue;
			}
			else {
				printf("Congratulations! Your guess %d is correct. You have found in guess %d.\n", guess, i + 1);
				times = 8;
			}
			printf("Do you want to play again? (0 for no, non-zero for yes): ");
			scanf("%d", &startG);
		}

	} while (startG != 0);


}

