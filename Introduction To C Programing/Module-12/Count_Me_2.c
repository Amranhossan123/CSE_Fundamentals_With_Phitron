#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001];
    scanf("%s",&s);
    int s_len=strlen(s);
    int c_count=0;
    for(int i=0;i<s_len;i++){
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
            c_count+=1;
        }
    }
    printf("%d",c_count);
    return 0;
}