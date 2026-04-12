#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max, min;
    if (a > b && a > c)
    {
        max = a;
    }
    else if (b > a && b > c)
    {
        max = b;
    }
    else
    {
        max = c;
    }

    if (max == a)
    {
        if (b > c)
        {
            min = b;
        }
        else
        {
            min = c;
        }
    }

    if (max == b)
    {
        if (a > c)
        {
            min = a;
        }
        else
        {
            min = c;
        }
    }
    if (max == c)
    {
        if (a > b)
        {
            min = a;
        }
        else
        {
            min = b;
        }
    }
    printf("%d %d",max,min);

    return 0;
}