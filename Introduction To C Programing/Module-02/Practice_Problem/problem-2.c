//Take a number from user and check if its a positive or negative number.
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    if(num>=0){
        printf("This is a positive");
    }else{
        printf("This is a negative number");
    }
}