/*
 * Q17.c
 *
 *  Created on: Jul 10, 2018
 *      Author: nobol billy
 */
#include<stdio.h>
int main (){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int num,res=0 ;
	printf("Enter the number=");
	scanf("%d",&num);
	while(num!=0){
		res++;
		num/=10;
	}
	printf("The reult=%d",res);
}

