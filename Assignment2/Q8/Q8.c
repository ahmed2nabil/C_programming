/*
 * Q8.c
 *
 *  Created on: Dec 7, 2019
 *      Author: nobol billy
 */
int checkPrime (int number){
	for(int i=2;i<(number/2);i++){
		if(number%i==0)return -1;
		else  continue;
	}
	return 1;
}
void displayPrime (int op1,int op2){
	for(int i=op1+1;i<op2;i++){
		int cc=checkPrime(i);
		if(cc==1) printf("%d\n",i);
		else continue;
	}
}
#include <stdio.h>
int main() {
	  setvbuf(stdout, NULL, _IONBF, 0);
	  setvbuf(stderr, NULL, _IONBF, 0);
	int number1,number2;

printf("Enter two numbers=");
scanf("%d %d",&number1,&number2);
printf("hh=%d\n",checkPrime(4));
displayPrime(number1,number2);
	return 0;
}

