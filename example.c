#include<stdio.h>
int main(void){
  int number,i,j,control=1;
  printf("Enter a positive number: ");
  scanf("%d",&number);
  for(i=2;i<=number;i++){
    for(j=2;j<=i/2;j++){
      if(i%j==0){
        control=0;
        break;
      }
    }
    if(control!=0){
      printf("%d",i);
    }
  }
  return (0);
}
