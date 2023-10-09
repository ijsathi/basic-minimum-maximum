#include <stdio.h>

int main() {
    char x;
    scanf("%c", &x);

    if (x >= 'a' && x <= 'z') {
        int letter = x - 32;
        printf("%c", letter);
    } else if (x >= 'A' && x <= 'Z') {
        int letter = x + 32;
        printf("%c", letter);
    } else {
        printf("Invalid input\n");
    }

    return 0;
}
