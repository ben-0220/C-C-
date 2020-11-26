#include<stdio.h>
#include<stdlib.h>

int main(void){

	int temp;
	int temp2;

	printf("請輸入你現在溫度(攝氏)");
	scanf("%d",&temp);
	temp2=temp*9/5+32;
	printf("你現在的溫度是%d(華氏)",temp2);
	

	return 0;	
	
} 
