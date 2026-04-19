#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    int flag=0;
    int result;
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            result=i;
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("-1");
    }else{
        printf("%d",result);
    }
    return 0;
}