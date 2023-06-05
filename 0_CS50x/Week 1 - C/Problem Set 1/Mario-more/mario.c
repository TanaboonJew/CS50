#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (int i = 1; i <= height; i++)
    {
        // Print spaces before the first set of hashtags
        for (int j = height - i; j > 0; j--)
        {
            printf(" ");
        }

        // Print the first set of hashtags
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        // Print the gap between the two sets of hashtags
        printf("  ");

        // Print the second set of hashtags
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        // Move to the next line
        printf("\n");
    }
}
