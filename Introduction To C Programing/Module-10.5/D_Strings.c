#include<stdio.h>
#include<string.h>
int main()
{
    char a[11],b[11];
    scanf("%s %s",&a,&b);
    int a_len=strlen(a);
    int b_len=strlen(b);
    printf("%d %d\n",a_len,b_len);
    for (int i = 0; i < a_len; i++)
    {
        printf("%c",a[i]);
    }
    for (int i = 0; i < b_len; i++)
    {
        printf("%c",b[i]);
    }
    printf("\n");
    char temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    for (int i = 0; i <a_len; i++)
    {
        printf("%c",a[i]);
    }

    printf(" ");

    for (int i = 0; i <b_len; i++)
    {
        printf("%c",b[i]);
    }
    
    

    return 0;
}