#include <stdio.h>

int main(void) {

    char c, initial;

    printf("Enter a first and last name: ");
    scanf(" %c", &initial);
    //消掉空格
    while ((c = getchar()) != ' ')
        ;

    while ((c = getchar()) == ' ')
        ;

    do {
        putchar(c);
    } while ((c = getchar()) != '\n' && c != ' ');

    printf(", %c.\n", initial);

    return 0;
}
