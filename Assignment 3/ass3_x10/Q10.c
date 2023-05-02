/*
 * Q10.c
 *
 *  Created on: Jul 18, 2018
 *      Author: nobol billy
 */
#include<stdio.h>
#define size 5
void conv(char str[]){
	int i=0;
while(str[i] !='\0'){
		if((str[i]>='A')&&(str[i]<='Z'))
		str[i]+=32;
i++;
}

}
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
int str[20];
printf("Please,Enter the required string message :");
gets(str);
printf("\n");
conv(str);
printf("Message After converting: %s",str);
}


