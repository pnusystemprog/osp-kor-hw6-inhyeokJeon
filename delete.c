#include "phone.h"
#define MAX 50
extern struct Contact PhoneBook[MAX];
extern int size;
void deleteByName()
{
	char a[15] = "";
	
	printf("Deletion is done\n");
	printf("Enter a name to delete :");
	scanf("%s", &a);
	
	for (int i = 0; i < size+1; i++) {
		if (strcmp(a, PhoneBook[i].Name) == 0) {
			memmove(PhoneBook[i].Name, PhoneBook[50].Name ,15);
			memmove(PhoneBook[i].PhoneNumber, PhoneBook[50].PhoneNumber, 15);
			break;
		}
	}
}
