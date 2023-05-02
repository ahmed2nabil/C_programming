/*
 * sss.c
 *
 *  Created on: Feb 18, 2019
 *      Author: nobol billy
 */
#include<stdio.h>
#include<string.h>
void reverse(char arr[]){
	int i=0,j;
	char temp;
	j=strlen(arr)-1;
	while(i<j){
	temp=arr[j];
	arr[j]=arr[i];
	arr[i]=temp;
	i++;
	j--;
	}
}
int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
   char str[1000];
   printf("\nEnter the string :");
   gets(str);

   reverse(str);

   printf("\nReverse string is :%s", str);
}


