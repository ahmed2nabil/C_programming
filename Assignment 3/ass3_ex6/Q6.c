/*
 * Q6.c
 *
 *  Created on: Jul 17, 2018
 *      Author: nobol billy
 */
#include<stdio.h>
#define size 6
int last_occ(int a[],int s,int num){
	int i,j=0;
	for (i=0;i<s;i++){
		if (num==a[i]){
			j=i;
		}
	}
	if (j!=0)
	return j;
	else
		return -1 ;

}
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int a[size]={1,2,3,4,4,3};
	int num,last;
	printf("Enter the required number=");
	scanf("%d",&num);
	printf("\n");
last=last_occ(a,size,num);
printf("Last occuerence=%d",last);

}

