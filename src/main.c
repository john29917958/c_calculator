#include "stdio.h"
#include "calculator.h"

int main(int argc, char **argv)
{
    printf("Welcome to simple C Console Calculator!\n");
    printf("Available functions:\n"
           "1: Add two numbers\n"
           "2: Subtract a value from a number\n"
           "3: Multiply two numbers\n"
           "4: Divide two numbers\n");
    printf("Please input a function number to calculate, h for help, and q to quit: ");

    return 0;
}