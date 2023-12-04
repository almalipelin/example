#include<stdio.h>

int main(void){
	int numbers[10],number,i,j,temp,x;
	
	printf("How many elements do you want to create an array with: ");
	scanf("%d",&x);
	
	for(i=0;i<x;i++){
		printf("Enter a number: ");
		scanf("%d",&numbers[i]);
	}
	
	for(i=0;i<x;i++){
		printf("%d\n",numbers[i]);
	}
	
	for(i=0,j=x-1;i<j;i++,j--){
		temp=numbers[i];
		numbers[i]=numbers[j];
		numbers[j]=temp;
	}
	
	printf("------\n");
	for(i=0;i<x;i++){
		printf("%d\n",numbers[i]);
	}
	
	return (0);
}
