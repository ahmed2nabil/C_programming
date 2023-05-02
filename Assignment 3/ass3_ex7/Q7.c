/*
 * Q7.c
 *
 *  Created on: Jul 17, 2018
 *      Author: nobol billy
 */
#include<stdio.h>
int arth_term(int a[],int term){
	int res ;
	res = a[0]+(term-1)*(a[1]-a[0]);
	return res ;
}
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	const int s =4;
	int i,a[s],term,res ;
	printf("Enter the arithmetic series(1st:4th) =");
	for (i=0;i<s;i++){
   scanf("%d",&a[i]);
}
	printf("\n");
	printf("Enter The nth term =");
	scanf("%d",&term);
	res= arth_term(a,term);
	printf("The %d th term =%d",term,res);
}



