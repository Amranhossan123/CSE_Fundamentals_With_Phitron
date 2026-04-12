#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max,min;
    if(a>=b && a>=c){
        max=a;
        if(b>=c){
            min=c;
        }else if (c>=b)
        {
            min=b;
        }
        
    }else if (b>=c && b>=a)
    {
        max=b;
        if(a>=c){
            min=c;
        }else if (c>=a)
        {
            min=a;
        }
        
    }else if (c>=a && c>=b)
    {
        max=c;
        if(a>=b){
            min=b;
        }else if (b>=a)
        {
            min=a;
        }
        
    }

    printf("%d %d",min,max);
    
    return 0;
}