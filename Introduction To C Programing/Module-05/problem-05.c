#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    if (x >= '0' && x <= '9')

    {
        printf("IS DIGIT");
    }
    else if (x >= 'a' && x <= 'z')
    {
        printf("ALPHA\n");
        printf("IS SMALL");
    }
    else if (x >= 'A' && x <= 'z')
    {
        printf("ALPHA\n");
        printf("IS CAPITAL");
    }

    return 0;
}