#include<stdio.h>

void sorting_numbers(int x,int y,int z){
	if(x>y && x>z){
		if(y>z){
			printf("%d > %d > %d",x,y,z);
		}
		else{
			printf("%d > %d > %d",x,z,y);
		}
	}
	else if(y>x && y>z){
		if(x>z){
			printf("%d > %d > %d",y,x,z);
		}
		else{
			printf("%d > %d > %d",y,z,x);
		}
	}
	else if(z>x && z>y){
		if(x>y){
			printf("%d > %d > %d",z,x,y);
		}
		else{
			printf("%d > %d > %d",z,y,x);
		}
	}
}

int main(void){
	int number1,number2,number3;
	printf("Enter three number: ");
	scanf("%d%d%d",&number1,&number2,&number3);
	
	sorting_numbers(number1,number2,number3);
	
	return (0);
}
