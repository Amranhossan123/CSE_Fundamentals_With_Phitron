#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = n; i>=1; i--)
    {

        for(int k=i;k<n;k++){
            printf(" ");
        }
        for (int j= (i*2)-1; j>=1; j--)
        {
            printf("*");
        }

        printf("\n");
        
    }
    
    return 0;
}