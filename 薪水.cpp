#include<stdio.h>
#include<stdlib.h>

int main(void){
	int hour,mon=0;
	
	scanf("%d",&hour);
	
	if(hour<=60)
		mon=hour*75;
	else if(hour>60&&hour<=75)
		mon=60*75+(hour-60)*75*1.25;
		 	else	 
				mon=60*75+114*75-1.25+(hour-76)*75*1.75;
	printf("�A�o�~���@%d��",mon);
	
	return 0;	
} 
