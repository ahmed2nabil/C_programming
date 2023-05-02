/*
 * Q1.c
 *
 *  Created on: Jul 25, 2018
 *      Author: nobol billy
 */
#include<stdio.h>
#include<string.h>
struct student{
	char name[30];
	int roll;
	int mark;
};
int main(){
	struct student s;
	s.mark=90;
	s.roll=3;
	strcpy(s.name,"Ahmed");
	printf("my name is %s\nmy roll= %d\nmy mark= %d",s.name,s.roll,s.mark);

}

