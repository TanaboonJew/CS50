#include<stdio.h>

int main(int argc, char const *argv[])
{
    char c;
    printf("Do you agree(Y/N)? ");
    scanf("%c", &c);
    
    if (c == 'y' || c == 'Y'){
        printf("Agreed");
    }
    else if (c == 'n' || c == 'N'){
        printf("Not Agreed");
    }
    else{
        printf("Please input Y or N");
    }
    return 0;
}
