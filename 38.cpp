#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int i=1,j=1,num=0,total=0;
	
	for(i=1;i<5;i++){
		num=3*8*i;
		total=total+num;		
	}
	printf("%d",total);
	return 0;	
} 
