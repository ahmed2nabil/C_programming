//#include<stdio.h>
//int main(){
//	setvbuf(stdout, NULL, _IONBF, 0);
//	setvbuf(stderr, NULL, _IONBF, 0);
//	int num,rem,res=0;
//	printf("Enter an integer number=");
//	scanf("%d",&num);
//	while(num!=0){
//		rem=num%10;
//		res=res*10+rem;
//		num/=10;
//	}
//	printf("The result=%d",res);
//}
#include <stdio.h>
int main (){
		setvbuf(stdout, NULL, _IONBF, 0);
		setvbuf(stderr, NULL, _IONBF, 0);
int number,result,temp;
printf("Enter your Number");
scanf("%d",&number);
while (number != 0){
	temp=number%10;
		result=result*10+temp;
		number/=10;
}
printf("The result=%d",result);
}
