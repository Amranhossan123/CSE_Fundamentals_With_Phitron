#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int first_digit=n%10;
    int secone_digit=n/10;
    if(first_digit%secone_digit==0 || secone_digit%first_digit==0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}