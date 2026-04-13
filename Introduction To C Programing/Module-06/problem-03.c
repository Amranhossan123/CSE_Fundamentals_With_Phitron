#include <stdio.h>
#include <stdbool.h>
int main()
{
    int x = 1999;

    while (true)
    {
        int y;
        scanf("%d", &y);
        if (x == y)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}