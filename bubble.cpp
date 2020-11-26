#include<stdio.h>
#include<stdlib.h>


int array[4]={56,89,100,74};

void show(int arr[]);
void bubble(int arr[]);

int main(void){

	printf("原先的矩陣是:");
	show(array);
	printf("\n");
	
	printf("後來的矩陣是:");
	bubble(array);
	show(array);
	
	return 0;
}

void show(int arr[]){
	int i;
	for(i=0;i<=3;i++){
	printf("%d",arr[i]);
	printf(" ");
	}
	return ;
}

void bubble(int a[]){
	int i,j,temp;
	for(i=0;i<4;i++){
		for(j=0;j<3-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];  
				a[j+1]=temp;
			}
		}
	}
	return ;
}
