#include<stdio.h>
int main(){
    int a;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    if(a>=5000){
        printf("Basay jabo\n");
    } 
    if(a>=10000){
        printf("Cox's bazar jabo\n");
    } if(a>=3000){
        printf("sundarban jabo\n");
    }else{
        printf("Kothao jabo na.");
    }
    return 0;
}