#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int i,total=0;
	
	for(i=1;i<=100;i++){
		if(i%24==0)
			total=total+i;				
	}
	
	printf("%d",total);
	return 0;
} 
