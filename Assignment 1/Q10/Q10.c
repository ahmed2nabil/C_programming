/*
 * Q10.c
 *
 *  Created on: Jul 10, 2018
 *      Author: nobol billy
 */
#include<stdio.h>
int main (){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int choose;
	float num1,num2;
	printf("Choose The Number of Operation\n1-add\n2-sub\n3-multiple\n4-division\n");
	scanf("%d",&choose);
	printf("Enter two  numbers=");
	scanf("%f %f",&num1,&num2);
	switch(choose){
	case 1 :
	printf("THe result=%f",num1+num2);
	break;
	case 2 :
	printf("THe result=%f",num1-num2);
    break;
	case 3:
	printf("THe result=%f",num1*num2);
	break;
	case 4:
	printf("THe result=%f",num1/num2);
	break;
	}

}

