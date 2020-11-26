#include<stdio.h>
#include<stdlib.h>
int num1=0,num2=0,sum=0;

int add(int,int);


int main(void){
	printf("請輸入兩個整數\n");
	scanf("%d",&num1);
	scanf("%d",&num2);
	sum=add(num1,num2);
	
	printf("%d+%d=%d",num1,num2,sum);
	
	return 0;
} 

int add(int num1,int num2){
	sum=num1+num2;
	return sum;
}
