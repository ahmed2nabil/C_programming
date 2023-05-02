/*
 * cc.c
 *
 *  Created on: Jun 29, 2019
 *      Author: nobol billy
 */
#include <stdio.h>
void string_copy(char s[],char s2[]){
	int i=0;
	while(s2[2]!='\0'){
		s[i]=s2[i];
		i++;
	}
	s[i]=s2[i];
}
void main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
char str1[15],str2[15]="Embedded C";
string_copy(str1,str2);
for(int i = 0; str1[i] != '\0'; ++i)
printf("str1=%c",str1[i]);
}
