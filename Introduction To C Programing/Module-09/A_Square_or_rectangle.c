#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int height,weight;
        scanf("%d %d",&height,&weight);
        if(height==weight){
            printf("Square\n");
        }else{
            printf("Rectangle\n");
        }
    }
    return 0;
}