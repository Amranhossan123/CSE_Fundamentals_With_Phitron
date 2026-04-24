#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int two_c=0,three_c=0;
    for(int i=0;i<n;i++){
        if((arr[i] %2==0 && arr[i]%3==0) || arr[i]%2==0){
            two_c+=1;
        }else if (arr[i]%3==0)
        {
            three_c+=1;
        }
        
    }
    printf("%d %d",two_c,three_c);
    return 0;
}