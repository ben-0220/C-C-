#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int age[4],i=0;/*�x�s���x�}�ƥ�*/ 
	
	for(i=0;i<=3;i++){
		printf("�п�J�~��\n");
		scanf("%d",&age[i]);
	}
	for(i=0;i<=3;i++){
		printf("age[%d]=%d\n",i,age[i]);
	}
	
	return 0;
}
