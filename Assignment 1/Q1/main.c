/*
 * main.c
 *
 *  Created on: Jul 8, 2018
 *      Author: nobol billy
 */
//program takes two numbers from user and calculate this equation
#include <stdio.h>
int main (){
		setvbuf(stdout, NULL, _IONBF, 0);
		setvbuf(stderr, NULL, _IONBF, 0);
		int num1,num2,res;
		printf("Enter two Numbers \n");
		 scanf("%d %d",&num1,&num2);
		 res=((num1+num2)*3)-10;
		 printf("The result = %d",res);
return 0;
}
