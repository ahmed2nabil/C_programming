/*
 * aa.c
 *
 *  Created on: Feb 26, 2019
 *      Author: nobol billy
 */
#include<stdio.h>
void main(){
	void *ptr;
	char c='a';
	int i=10;
	float f=55.5;
	ptr=&c;
	ptr=&i;
	//ptr=&f;
//	printf("%f",*((float*)ptr));
	printf("%d",*((int*)ptr));
}

