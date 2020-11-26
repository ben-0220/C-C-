#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	char ch;
	
	printf("請輸入任一數字或英文單字。");
	scanf("%c",&ch);
	
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    	printf("這是英文字母\n");
    else 
    	printf("這是數字");
    	
	return 0;		
	
}
