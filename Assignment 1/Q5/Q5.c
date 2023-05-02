/*
 * Q5.c
 *
 *  Created on: Jul 9, 2018
 *      Author: nobol billy
 */
#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char c ;
	printf("Enter the character=\n");
	scanf("%c",&c);
	printf("ASCII value=%d",c);
}

