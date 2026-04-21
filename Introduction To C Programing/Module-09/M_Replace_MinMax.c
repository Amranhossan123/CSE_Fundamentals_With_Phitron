#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int mn=INT_MAX,mn_idx=-1;
    int mx=INT_MIN,mx_idx=-1;
    for(int i=0;i<n;i++){
        if(mn>arr[i]){
            mn=arr[i];
            mn_idx=i;
        }
        if (mx<arr[i])
        {
            mx=arr[i];
            mx_idx=i;
        }
    }
    
    arr[mn_idx]=mx;
    arr[mx_idx]=mn;

    for (int i = 0; i <n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}