#include<stdio.h>
#include<string.h>
int main()
{
    char s[10001];
    scanf("%s",&s);
    int s_len=strlen(s);
    int apper[26]={0};
    for (int i = 0; i < s_len ; i++)
    {   
        int val=s[i]-'a';
        apper[val]+=1;
    }

    for (int i = 0; i < 26; i++)
    {
        if(apper[i]>0){
            printf("%c - %d\n",i+'a',apper[i]);
        }
    }
    
    
    return 0;
}