#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int score;
	
	printf("請輸入成績\n");
	scanf("%d",&score);
	
	if(score<50)
		printf("請重修");
	
	else
		if(score<=59)
			printf("請參加補考");
		else
			printf("本科及格");	
			 
	
	return 0;
	
} 
