#include<stdio.h>
#include<stdlib.h>

int main(void){
	int num;
	int i=1;
	printf("請輸入要算出因數的數字\n");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		if(num%i==0)
			printf("%d\n",i);
	}
	
	return 0;
	
} 
