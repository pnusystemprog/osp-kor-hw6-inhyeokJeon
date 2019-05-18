#include <string.h>
#include <stdio.h>
#include "phone.h"
#define MAX 50
extern struct Contact PhoneBook[MAX];
extern int size;
void registerPhoneData()
{
	static char a[15] = "qwerty1234";
	char b[15] = "";
	
	int count = 0;

	printf("password:");
	scanf("%s", b);
	if (strcmp(a, b) == 0) {


		printf("name:");
		scanf("%s", &PhoneBook[size].Name);
		printf("phoneNumber:");
		scanf("%s", &PhoneBook[size].PhoneNumber);
		printf("New User Name : %s\nPhoneNumber:%s\n", PhoneBook[size].Name, PhoneBook[size].PhoneNumber);
		size++;	


	}
	else {
		count++;
		if (count == 3) {
			printf("Not Matched!!!%dtimes\n", count);
			printf("You are not allowed to access PhoneBook");
			
		}
		else {
			printf("Not Matched!!!%dtimes\n", count);

		}	
	}



	
	
	printf("Registration\n");
}
