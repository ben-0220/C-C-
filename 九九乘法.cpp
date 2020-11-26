#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int i,j=1;
	
	for(i=1;i<10;i++){
		for(j=1;j<10;j++){
			
			printf("%d*%d=%d\n",i,j,i*j); 
		}
	}
	return 0;
} 
