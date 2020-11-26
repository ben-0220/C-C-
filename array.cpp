#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int age[4],i=0;/*儲存的矩陣數目*/ 
	
	for(i=0;i<=3;i++){
		printf("請輸入年紀\n");
		scanf("%d",&age[i]);
	}
	for(i=0;i<=3;i++){
		printf("age[%d]=%d\n",i,age[i]);
	}
	
	return 0;
}
