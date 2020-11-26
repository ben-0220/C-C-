#include<stdio.h>
#include<stdlib.h>

int swap(int,int);
int main(void){
	int a=3,b=2;
	a=swap(a,b);
	
	printf("a=%d,b=%d",a,b);
} 
int swap(int c,int d){
	int temp=c;
	c=d;
	d=temp;
	return c ;
}
