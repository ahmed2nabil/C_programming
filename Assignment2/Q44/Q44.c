/*
 * Q44.c
 *
 *  Created on: Dec 6, 2019
 *      Author: nobol billy
 */


#include<stdio.h>
int calculate(int operand1,int operand2,char operation);
  int main (){
	  setvbuf(stdout, NULL, _IONBF, 0);
	  setvbuf(stderr, NULL, _IONBF, 0);
int num1,num2,res;
char op;
printf("Enter the required operation=");
scanf("%c",&op);
printf("\n Enter  two operands =");
scanf("%d %d",&num1,&num2);

res=calculate(num1,num2,op);
printf("\n The result = %d",res);
return 0;
  }
int calculate(int operand1,int operand2,char operation){
	int result;
	switch(operation){
	case'+':
		result=operand1+operand2;
		break;
	case'-':
		result=operand1-operand2;
		break;
	case'*':
		result=operand1*operand2;
		break;
	case'/':
		result=operand1/operand2;
		break;
	default :
		result=0;
	break;
	}
	return result;
}
