#include <stdio.h>
int main()
{
    int tk;
    printf("Enter the value of tk:\n");
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("Cox's Bazar jabo\n");
        if (tk >= 10000)
        {
            printf("Sentmartin jabo\n");
        }
        else
        {
            printf("Ferot cole asbo");
        }
    }
    else
    {
        printf("Kothao jabo na ");
    }

    return 0;
}