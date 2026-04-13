#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        int num;
        scanf("%d",&num);
        if(num==0){
            printf("0");
        }
        while (num!=0)
        {
            int last_digit=num%10;
            printf("%d ",last_digit);
            num=num/10;
        }
        printf("\n");
        
    }
    return 0;
}