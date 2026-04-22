#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        char s[101];
        scanf("%s",&s);
        int s_len=strlen(s);
        if(s_len>10){
            printf("%c%d%c\n",s[0],s_len-2,s[s_len-1]);
        }else{
            printf("%s\n",s);
        }
    }
    
    return 0;
}