#include<stdio.h>
#include<stdlib.h>


int power(int,int);    /*b��a����*/ 
int a=0,b=0,num=1,i=1;

int main(void){
	printf("�п�J�Ʀr\n");
	scanf("%d",&b);
	
	printf("�п�J�����\n");
	scanf("%d",&a);
	
	printf("%d",power(a,b));
	return 0;
}

int power(int a,int b){
	for(i=1;i<=a;i++){
		num=b*num;
	}
	return num;
}
