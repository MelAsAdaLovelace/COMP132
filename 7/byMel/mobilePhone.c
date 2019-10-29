#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
typedef struct {
	char senderName[11];
	char senderPhone[11];
	char message[51];
} Mobile;

Mobile constructMobile(char sName[], char sPhone[], char msg[]);
void printMobile(Mobile mobiles[], int size);
void processMessage(Mobile *mbl);
void findSum(char msg[]);
void caesarCipher(char msg[]);

int main() {

	Mobile mobiles[3];

	//Construct 3 mobile structures
	mobiles[0] = constructMobile("Alice", "1231234545", "12+23+1");		//every field is valid
	mobiles[1] = constructMobile("B0B", "52394913op", "catscraddle");	//first field has non-alpha, second field has non-digit char
	mobiles[2] = constructMobile("BillyTheKidsNephew", "1123", "amazontoniagara"); // first field exceeds length, second field is too short

	printf(" Initial values: \n");
	printMobile(mobiles, 3);
	printf("\n Beginning to process messages... \n");

	//Note the use of pointer arithmetic for deciding on arguments
	processMessage(mobiles);
	//processMessage(mobiles + 1);
	//processMessage(mobiles + 2);

	printf("\n After processing messages: \n");
	printMobile(mobiles, 3);
	return 0;
}


Mobile constructMobile(char sName[], char sPhone[], char msg[]) {
	Mobile mel; 
	int check = 0;
	int len = strlen(sName);
	if (len> 10) {
		check = 1;
	}
	for (int i = 0; i < len; i++) {
		if (!isalpha(sName[i])) {
			check = 1;
			break;
		}
	}
	if (check == 1) {
		strcpy(mel.senderName, "");
	}
	else {
		strcpy(mel.senderName, sName);
	}

	check = 0;
	len = strlen(sPhone);

	if (len != 10) {
		check = 1;
	}

	for (int i = 0; i < len; i++) {
		if (!isdigit(sPhone[i])) {
			check = 1;
			break;
		}
	}

	if (check == 1)
		strcpy(mel.senderPhone, "");
	else
		strcpy(mel.senderPhone, sPhone);

	
	len = strlen(msg);
	check = 0;
	if (len > 50) {
		check = 1;
	}
	for (int i = 0; i < len; i++) {
		if (!isalnum(msg[i]) && msg[i] != '+') {
			check = 1;
			break;
		}
	}
	if (check == 1)
		strcpy(mel.message, "");
	else
		strcpy(mel.message, msg);

	return mel;
}

void printMobile(Mobile mobiles[], int size) {
	for (int i = 0; i < size; i++) {
		printf("Mobile %d:\nSender Name:\t%s\nSender Phone:\t%s\nMessage:\t%s\n", (i+1), mobiles[i].senderName, mobiles[i].senderPhone, mobiles[i].message);
	}
}

void processMessage(Mobile *mbl) {
	int dig = 0;
	int alp = 0;
	for (int i = 0; i < 51; i++) {
		while (mbl->message != '\0') {
			if (!isdigit((mbl->message + i)) && (mbl->message + i) != '+') {
				dig = -1;
			}
			if (!isalpha(mbl->message + i)) {
				alp = -1;
			}
		}
	}
	if (dig == 0)
		findSum(mbl->message);
	if (alp == 0)
		caesarCipher(mbl->message);
}

void findSum(char msg[]) {
	char *tokenPtr;
	int sum = 0;
	int count = 0;
	tokenPtr = strtok(msg, "+");

	while (tokenPtr != NULL) {
		count++;
		sum += atoi(tokenPtr);
		tokenPtr = strtok(NULL, "+"); 
	}
	printf("The expression %s has %d terms and its result is %d", msg, count, sum);
}

void caesarCipher(char msg[]) {
	int i, len;	//i: loop iterator, len: keeps string lengths,

	printf("The message %s is encoded as ", msg);	//print the initial message
	len = strlen(msg);

	for (i = 0; i < len; i++)					//for each char in the string
	{
		msg[i] = (msg[i] - 97 + 2) % 26 + 97;	//then increment by two modulo 26
	}
	printf("%s.\n", msg);
}