#include<stdio.h>

int main(int argc, char const *argv[])
{
    int times;
    printf("how many times? ");
    scanf("%i", &times);
    for (int i = 0; i < times; i++){
        printf("meow\n");
    }

    printf("----\n");

    while (times > 0){
        printf("meow\n");
        times--;
    }
    return 0;
}