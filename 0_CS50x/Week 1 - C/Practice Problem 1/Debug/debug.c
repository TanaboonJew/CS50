// Become familiar wih C syntax
// Learn to debug buggy code

#include<cs50.h>
#include<stdio.h>//add this

int main(void)
{
    // Ask for your name and where live
    string name = get_string("What is your name? ");//add data type and ;
    string location = get_string("Where do you live? ");//add data type and ;

    // Say hello
    printf("Hello, %s, from %s!\n", name, location);//printf not print
}
