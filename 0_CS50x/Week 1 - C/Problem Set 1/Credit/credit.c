#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function prototypes
string get_num(void);
string get_type(string number);
bool check_num(string number);

int main(void)
{
    string number = get_num();
    string type = get_type(number);

    if (strcmp(type, "INVALID") == 0)
    {
        printf("INVALID\n");
        return 0;
    }

    if (check_num(number))
    {
        printf("%s\n", type);
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}

// Get the credit card number as a string
string get_num(void)
{
    long long int number;
    string numString = NULL;

    do
    {
        number = get_long_long("Number: ");
    }
    while (number <= 0);

    // Convert the number to a string
    int length = snprintf(NULL, 0, "%lld", number);
    numString = malloc(length + 1);  // Allocate memory for numString
    sprintf(numString, "%lld", number);

    return numString;
}

// Determine the credit card type based on the number
string get_type(string number)
{
    int length = strlen(number);

    if (length == 15 && (number[0] == '3' && (number[1] == '4' || number[1] == '7')))
    {
        return "AMEX"; // American Express
    }

    if (length == 16 && (number[0] == '5' && (number[1] == '1' || number[1] == '2' || number[1] == '3' || number[1] == '4'
                         || number[1] == '5')))
    {
        return "MASTERCARD"; // Mastercard
    }

    if ((length == 13 || length == 16) && number[0] == '4')
    {
        return "VISA"; // Visa
    }

    return "INVALID"; // Invalid card

}


// Perform the credit card number validation
// Perform the credit card number validation
bool check_num(string number)
{
    int sum = 0;
    int temp;

    // Iterate through every other digit, starting from the second-to-last digit
    for (int i = strlen(number) - 2; i >= 0; i = i - 2)
    {
        temp = (int)number[i] - 48;
        temp = temp * 2;

        // If the result is a single-digit number, add it directly to the sum
        if (temp < 10)
        {
            sum += temp;
        }
        // If the result is a two-digit number, add the digits separately to the sum
        else
        {
            sum += (temp / 10) + (temp % 10);
        }
    }

    // Iterate through the remaining digits
    for (int i = strlen(number) - 1; i >= 0; i = i - 2)
    {
        temp = (int)number[i] - 48;

        // Add the current digit to the sum
        sum += temp;
    }

    // If the sum is divisible by 10, the card number is valid
    if (sum % 10 == 0)
    {
        return true; // Valid card number
    }

    return false; // Invalid card number
}

