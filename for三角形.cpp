#include<stdio.h>
#include<stdlib.h>

int main(void){
	
    int i,j=1;
	
	for(i=1;i<6;i++){
		
		for(j=6-i;j<6;j++){
			printf("*");
		}
	printf("\n");
	}
	return 0;	
} 
