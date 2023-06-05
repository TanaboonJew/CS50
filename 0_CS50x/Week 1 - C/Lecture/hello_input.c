#include <stdio.h>
int main()
{
    char name[30];
    printf("What is your name? ");
    scanf("%s", name);

    printf("Hello, %s.", name);

    return 0;
}