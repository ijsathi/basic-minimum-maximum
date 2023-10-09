#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    if (x >= '0' && x <= '9')
    {
        printf("IS DIGIT");
    }
    else
    {
        printf("ALPHA\n");
        if (x >= 'a' && x <= 'z')
        {
            int sum = x - 32;
            printf("IS SMALL\n");
        }
        else
        {
            int sum = x + 32;
            printf("IS CAPITAL\n");
        }
    }
    return 0;
}