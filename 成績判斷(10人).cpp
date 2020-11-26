#include<stdio.h>
#include<stdlib.h>

int main(void){
	int A=0,B=0,C=0,score=0,i=0;
	
	
	
		for(i=0;i<10;i++){
	        
			scanf("%d",&score);
		    if(score<60)
				C++;
			else if(score>=60&&score<=75)
				B++;
				else if(score>=75&&score<=100)	
	    			A++;
	    			else
					printf("¿é¤J¿ù»~!"); 						
   }
   printf("A=%d,B=%d,C=%d",A,B,C); 
   
   return 0;
              } 
