#include<stdio.h>

int main(int argc, char const *argv[])
{
    char c;
    while (1)
    {
        printf("Do you agree(Y/N)? ");
        scanf(" %c", &c);
        if (c == 'y' || c == 'Y'){
            printf("Agreed");
            break;
        }
        else if (c == 'n' || c == 'N'){
            printf("Not Agreed");
            break;
        }
        else{
            printf("Please input Y or N\n");
        }

    }

    return 0;

}
