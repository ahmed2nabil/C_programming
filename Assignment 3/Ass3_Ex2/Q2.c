/*
 * Q2.c
 *
 *  Created on: Jul 16, 2018
 *      Author: nobol billy
 */
#include<stdio.h>
#define size 6
int ch(char arr[],int s){
	int i,j,t ;
	for (i=0;i<s-1;i++){
		for (j=i+1;j<s;j++){
		if (arr[i]==arr[j]){
			t=0;
			break;
		}
		else{
			t=1 ;
	}
	}
	}
return t ;
}
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int i,c ;
	char str[size];
	for (i=0;i<size;i++){
		scanf("%c",&str[i]);
	}
	c=ch(str,size);
	if (c==0){
		printf("one of  characters is repeated");
	}
	else
		printf("all characters are distinct ");


}

