#include <stdio.h>
#include <cs50.h>//add input option

int main(void)
{
    string name = get_string("What's your name? ");
    printf("hello, %s\n", name);
}