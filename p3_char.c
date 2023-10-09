#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    if (x >= 'a' && x <= 'z')
    {
        int letter = x - 32;
        printf("%c", letter);
    }
    else
    {
        int letter = x + 32;
        printf("%c", letter);
    }
    return 0;
}