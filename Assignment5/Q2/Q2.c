/*
 * Q2.c
 *
 *  Created on: Jul 26, 2018
 *      Author: nobol billy
 */
#include<stdio.h>
struct distance {
	int feet ;
	float inch ;
}d1,d2,sum;
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
printf("Enter information for 1st distance\n");
printf("Enter feet=");
scanf("%d",&d1.feet);
printf("Enter inch=");
scanf("%f",&d1.inch);

printf("Enter information for 2st distance\n");
printf("Enter feet=");
scanf("%d",&d2.feet);
printf("Enter inch=");
scanf("%f",&d2.inch);
sum.feet=d1.feet+d2.feet ;
sum.inch=d1.inch+d2.inch;
if(sum.inch>12.0){
	sum.inch=sum.inch-12;
	sum.feet++;
}
printf("\nSum of Distances = %d  %.1f",sum.feet,sum.inch);
return 0;
}

