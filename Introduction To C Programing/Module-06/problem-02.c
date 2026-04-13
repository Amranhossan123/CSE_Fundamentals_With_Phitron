#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int even, odd, positive,negative;
    even=odd=positive=negative=0;
    for (int j = 1; j <= n; j++)
    {
        int i;
        scanf("%d", &i);
        if (i > 0)
        {
            positive += 1;
        }
        else if (i < 0)
        {
            negative += 1;
        }

        if (i % 2 == 0)
        {
            even += 1;
        }
        else if (i % 2 != 0)
        {
            odd += 1;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    return 0;
}