#include <cs50.h>//help handles decimal number of llamas
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start;
    do
    {
        start = get_int("Start size: ");
        if (start < 9)
        {
            printf("The start size should be greater than or equal to 9.\n");
        }
    }
    while (start < 9);//handles starting values less than 9

    // TODO: Prompt for end size
    int end = 0;
    do
    {
        end = get_int("End size: ");
        if (start > end)
        {
            printf("The end size should be greater than The start size.\n");
        }
    }
    while (start > end);//handles ending values less than starting values

    // TODO: Calculate number of years until we reach threshold
    int size = start;
    int born;
    int unalive;
    int year = 0;
    while (size < end)
    {
        born = size / 3;
        unalive = size / 4;
        size = size + born - unalive;
        year++;
    }


    // TODO: Print number of years
    printf("Years: %i\n", year);
}
