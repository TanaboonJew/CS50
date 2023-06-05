#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    int y;
    printf("Please input one integer: ");
    scanf("%i", &x);
    printf("Please input another integer: ");
    scanf("%i", &y);

    if (x > y){
        printf("%i is greater than %i", x, y);
    }
    else if (x < y){
        printf("%i is less than %i", x, y);
    }
    else{
        printf("%i is equal to %i", x, y);
    }
    
    return 0;
}
