#include<stdio.h>
#include<stdlib.h> 

int main(void){
	int num[5],i=0;
	int swap(int,int);
	int a=0,b=0;
	
	for(i=0;i<=4;i++){
		printf("�п�J�ݭn������Ʀr\n");
		scanf("%d",&num[i]);
		printf("num[%d]=%d\n",i,num[i]);
	}
	
	for(i=1;i<=3;i++){
		if(num[i]>num[i+1])
			(num[i],num[i+1])=swap(num[i],num[i+1]);
		if(num[i]<num[i-1])
			(num[i],num[i-1])=swap(num[i],num[i-1]);				
	}
	printf("�̤j�ƬO%d\n",&num[4]);
	printf("�̤p�ƬO%d\n",&num[0]);
	
	return 0;
}

int swap(int a,int b){
	int temp=a;
		a=b;
		b=temp;
		return a,b;
}
