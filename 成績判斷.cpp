#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int score;
	
	printf("�п�J���Z\n");
	scanf("%d",&score);
	
	if(score<50)
		printf("�Э���");
	
	else
		if(score<=59)
			printf("�аѥ[�ɦ�");
		else
			printf("����ή�");	
			 
	
	return 0;
	
} 
