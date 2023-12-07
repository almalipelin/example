#include<stdio.h>

int fact(int x);

int main(void){

	int number;
	printf("Number to be calculated with factorial: ");
	scanf("%d",&number);
	printf("%d! = %d",number,fact(number));
	
	return (0);
}

int fact(int x){
	
	if(x==0||x==1){
		return (1);
	}
	else{
		return(x*fact(x-1));
	}
}
