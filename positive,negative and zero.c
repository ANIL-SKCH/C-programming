//C program to Check Whether a Number is Positive or Negative or Zero.
#include <stdio.h>
int main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a>0){
        printf("The given number is Positive");
    }else if(a<0){
        printf("the given number is Negative");
        
    } else{
        printf("The given number is Zero");
    }
}
