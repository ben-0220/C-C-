#include<stdio.h>
#include<stdlib.h>

int main(void){
	int i;
	int total=0,num=0;
	printf("請輸入一個數字\n");
	scanf("%d",&num);
	
	
	for(i=1;i<num+2;i=i+2){
		total=total+i;
	}	
    printf("1+3+5+...+%d=%d",num,total);
}
 
