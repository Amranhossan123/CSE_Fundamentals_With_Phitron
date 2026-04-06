#include<stdio.h>
int main(){
    int tk;
    printf("Enter value of tk:\n");
    scanf("%d",&tk);
    if(tk>=100){
        printf("Burger khabo");
    }
    else if(tk>=50){
        printf("Fuchka khabo");
    }
    else if(tk>=20){
        printf("Chips khabo");
    }else{
        printf("Kichu khabo na");
    }
    return 0;
}