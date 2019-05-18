#include "phone.h"
extern int size;
#define MAX 50
extern struct Contact PhoneBook[MAX];
void searchByName()
{
	char a[15] = "";
	printf("Search by Name\n");
	printf("Enter a name to search:");
	scanf("%s", a);
	for (int i = 0; i < size+1; i++) {
		if (strcmp(a, PhoneBook[i].Name) == 0) {
			printf("%s %10s\n", PhoneBook[i].Name, PhoneBook[i].PhoneNumber);
		}
		
	}
	

}
