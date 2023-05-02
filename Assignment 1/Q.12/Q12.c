/*
 * Q12.c
 *
 *  Created on: Jul 10, 2018
 *      Author: nobol billy
 */
#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int i=1 ;
	int f;
	int fac ;
	printf("Enter the number=");
	scanf("%d",&f);
	fac =f;
while(i<f){
	fac*=i;
			i++;
}
printf("%d",fac);
}

