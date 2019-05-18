#include <stdio.h>
#include "phone.h"
#define MAX 50
extern struct Contact PhoneBook[MAX];
extern int size;
void printAll()
{
	printf("Print all contants in the PhoneBook\n");
	for (int i = 0; i < size+1; i++) {
		printf("%s %10s\n", PhoneBook[i].Name, PhoneBook[i].PhoneNumber);
	}
}
