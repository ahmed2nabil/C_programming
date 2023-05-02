/*
 * Q4.c
 *
 *  Created on: Jul 9, 2018
 *      Author: nobol billy
 */
#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	float radius,area,circumference  ;
	printf("Enter the radius of circule=\n");
	scanf("%f",&radius) ;
	area = (radius*radius)*(22.0/7.0);
	circumference=2*(22.0/7.0)*radius;
	printf("area=%f\ncircumferene=%f\n",area,circumference);
}
