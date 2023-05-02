/*
 * Q2.c
 *
 *  Created on: Jul 23, 2018
 *      Author: nobol billy
 */
#include<stdio.h>
int main(){
int len=0 ;
char str[]="AhmedNabil";
char*ptr=str;
while(*ptr!="\0"){
	len++;
	ptr++;
}
printf("The length of string=%d",len);

}

