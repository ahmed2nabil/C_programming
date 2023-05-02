/*
 * Q6.c
 *
 *  Created on: Aug 2, 2018
 *      Author: nobol billy
 */
#include <stdio.h>

union family_name
{
	char first_name[30];
	char last_name[30];
};

int main()
{
	union family_name member;

	// store "Mohamed Tarek" --> first_name
	strcpy(member.first_name,"Mohamed Tarek");

	// last_name share the same memory area with first_name
	printf("Last Name : %s \n",member.last_name);

	// union allocate memory equals to the size of its largest member
	printf("Size of Union family_name is : %d \n",sizeof(union family_name));

    return 0;
}


