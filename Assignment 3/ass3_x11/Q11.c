/*
 * Q11.c
 *
 *  Created on: Jul 18, 2018
 *      Author: nobol billy
 */
#include<stdio.h>
#define size 12
int freq(char str[],char c,int s ){
	int j=0,i=0;
	while(str[i]!='\0'){
if (c==str[i])
	j++;
i++;
}
	return j ;
}
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int i,res ;
	char str[size];
	char c ;
	printf("Enter your string=");
	for(i=0;i<size;i++){
		scanf("%c",&str[i]);
	}
	printf("Enter a character to be checked=");
	scanf("%c",&c);
	printf("\n");
	res=freq(str,c,size);
	printf("The Frequency of %c in  a srting  = %d",c,res);


}
