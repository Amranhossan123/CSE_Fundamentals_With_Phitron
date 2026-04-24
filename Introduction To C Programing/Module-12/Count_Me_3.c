#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        char s[10001];
        scanf("%s",&s);
        int s_len=strlen(s);
        int s_count=0,c_count=0,d_count=0;
        for (int i = 0; i < s_len; i++)
        {
            if(s[i]>=97 && s[i]<=122){
                s_count+=1;
            }else if(s[i]>=65 && s[i]<=90){
                c_count+=1;
            }else if(s[i]>=48 && s[i]<=57){
                d_count+=1;
            }
        }
        printf("%d %d %d\n",c_count,s_count,d_count);
        
        
    }
    return 0;
}