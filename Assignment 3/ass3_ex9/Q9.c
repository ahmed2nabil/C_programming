/*
 * Q9.c
 *
 *  Created on: Jul 17, 2018
 *      Author: nobol billy
 */
#include<stdio.h>
int fib(int num);
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int num,res ;
	printf("Enter the nth Fibonacci number=");
	scanf("%d",&num);
	res=fib(num);
	printf("The Fibonacci number=%d",res);
}
//Fibonacci  with For-loop
/*int fib(int num){
	int i,num1=0,num2=1,nxt;
	for (i=0;i<num;i++){
		nxt=num1+num2;
		num1=num2;
		num2=nxt;
	}
	return num1 ;
}*/
//========================================
//Fibonacci with While-loop
/*int fib(int num){
	int i=0,num1=0,num2=1,nxt;
	while(i<num){
		nxt=num1+num2;
		num1=num2;
		num2=nxt;
		i++ ;
	}
	return num1;
}*/
//===============================
//Fibonacci with recursive Function
int fib(int num){
	if(num<=1)
		return num ;
	else
	return fib(num-2)+fib(num-1);
}
