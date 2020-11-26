#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int i,j,num;
	
	for(i=1;i<=3;i++){
		printf("請輸入一個數字\n");
		scanf("%d",&num);
		
		for(j=1;j<=num;j++){
			printf("*");
		}
	}
	
	return 0;	
} 
