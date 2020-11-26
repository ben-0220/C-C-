#include<stdio.h>
#include<stdlib.h>

int j=0,i=0;
char ch;
void display(int,char);

int main(){
	printf("要輸入什麼字元\n");
	scanf("%c",&ch);
	printf("要重複幾次\n");
	scanf("%d",&j);
	display(j,ch);
	return 0;
}
void display(int j,char ch){
	for(i=1;i<=j;i++){
		printf("%c",ch);
	}
	return; 
}
