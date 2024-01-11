#include<stdio.h>
#include<string.h>

void upperTolower(char *ptr);
void lowerToupper(char *ptr);

int main(void){
	char message[100];
	int choice;
	
	puts("Make a choice.");
	puts("1-Convert from uppercase to lowercase.");
	puts("2-Convert from lowercase to uppercase.");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:puts("Enter a sentence: ");
			   gets(message);
			   upperTolower(message);
			   break;
		case 2:puts("Enter a sentence: ");
			   gets(message);
			   lowerToupper(message);
			   break;
		default:puts("You made the wrong choice.");
	}
	
	return (0);
}

void upperTolower(char *ptr){
	
	for(;*ptr!='\0';ptr++){
		if(*ptr>='A'&&*ptr<='Z'){
			putchar(*ptr+32);
		}
		else{
			putchar(*ptr);
		}
	}
}

void lowerToupper(char *ptr){
	
	for(;*ptr!='\0';ptr++){
		if(*ptr>='a'&&*ptr<='z'){
			putchar(*ptr-32);
		}
		else{
			putchar(*ptr);
		}
	}
}


