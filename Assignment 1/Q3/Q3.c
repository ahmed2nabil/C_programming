/*
 * Q3.c
 *
 *  Created on: Jul 9, 2018
 *      Author: nobol billy
 */
//convert from Celisus to fahrenheit
#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	float c,f ;
printf("Enter The tempueature of Celisus=\n");
scanf("%f",&c);
f=c*(9.0/5.0)+32 ;
printf("tem of fahrenhiet =%f",f);

}

