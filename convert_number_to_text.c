#include<stdio.h>

void first_digit(int sayi);
void second_digit(int sayi);

int main(void){
	int number,d1,d2,d3,d4;
	while(number!=-1){
		printf("Enter four digit number\n(If you want to exit enter -1):");
		scanf("%d",&number);
		if(number==-1)break;
		
		d1=number%10;
		d2=(number%100)/10;
		d3=(number%1000)/100;
		d4=number/1000;
		
		first_digit(d4);
		printf(" thousand ");
		
		if(d3!=1)first_digit(d3);
		if(d3!=0)printf(" hundred ");
		
		second_digit(d2);
		printf(" ");
		
		first_digit(d1);
		printf("\n\n");
	}
	return (0);
}

void first_digit(int number){
	switch(number){
		case 1: printf("one");break;
		case 2: printf("two");break;
		case 3: printf("three");break;
		case 4: printf("four");break;
		case 5: printf("five");break;
		case 6: printf("six");break;
		case 7: printf("seven");break;
		case 8: printf("eight");break;
		case 9: printf("nine");break;
	}
}

void second_digit(int number){
	switch(number){
		case 1: printf("ten");break;
		case 2: printf("twenty");break;
		case 3: printf("thirty");break;
		case 4: printf("fourty");break;
		case 5: printf("fifty");break;
		case 6: printf("sixty");break;
		case 7: printf("seventy");break;
		case 8: printf("eighty");break;
		case 9: printf("ninety");break;
	}
}
