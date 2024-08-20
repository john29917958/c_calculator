#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "stdbool.h"
#include "calculator.h"
#include "utilities.h"

void run_sum_calculation();

void run_subtraction_calculation();

void run_multiplication_calculation();

void run_division_calculation();

void print_help_message();

int main(int argc, char **argv)
{
    printf("Welcome to simple C Console Calculator!\n");
    print_help_message();
    bool is_quit = false;
    do
    {
        printf("Please input a function number for calculation, h for help, and q to quit: ");
        char input[256];
        const size_t input_buffer_size = sizeof(input);
        read_line(input, input_buffer_size);
        if (strcmp(input, "1") == 0)
        {
            run_sum_calculation();
        }
        else if (strcmp(input, "2") == 0)
        {
            run_subtraction_calculation();
        }
        else if (strcmp(input, "3") == 0)
        {
            run_multiplication_calculation();
        }
        else if (strcmp(input, "4") == 0)
        {
            run_division_calculation();
        }
        else if (strcmp(input, "h") == 0)
        {
            print_help_message();
        }
        else if (strcmp(input, "q") == 0)
        {
            is_quit = true;
            printf("Thanks for using Simple Console C Calculator.\n");
        }
        else
        {
            printf("We don't have this option \"%s\"!\n", input);
        }
    } while (!is_quit);

    return 0;
}

void run_sum_calculation()
{
    char input[256];
    const size_t input_size = sizeof(input);
    printf("Please enter the first number as an addend: ");
    read_line(input, input_size);
    double addend1;
    sscanf(input, "%lf", &addend1);
    printf("Please enter the second number as an addend: ");
    read_line(input, input_size);
    double addend2;
    sscanf(input, "%lf", &addend2);
    double result = sum(addend1, addend2);
    printf("The result of %g + %g is %g\n", addend1, addend2, result);
}

void run_subtraction_calculation()
{
    char input[256];
    const size_t input_size = sizeof(input);
    printf("Please enter the first number as an minuend: ");
    read_line(input, input_size);
    double minuend;
    sscanf(input, "%lf", &minuend);
    printf("Please enter the second number as an subtrahend: ");
    read_line(input, input_size);
    double subtrahend;
    sscanf(input, "%lf", &subtrahend);
    double result = subtract(minuend, subtrahend);
    printf("The result of %g - %g is %g\n", minuend, subtrahend, result);
}

void run_multiplication_calculation()
{
    char input[256];
    const size_t input_size = sizeof(input);
    printf("Please enter the first number as an multiplier: ");
    read_line(input, input_size);
    double multiplier;
    sscanf(input, "%lf", &multiplier);
    printf("Please enter the second number as an multiplicand: ");
    read_line(input, input_size);
    double multiplicand;
    sscanf(input, "%lf", &multiplicand);
    double result = multiply(multiplier, multiplicand);
    printf("The result of %g x %g is %g\n", multiplier, multiplicand, result);
}

void run_division_calculation()
{
    char input[256];
    const size_t input_size = sizeof(input);
    printf("Please enter the first number as an dividend: ");
    read_line(input, input_size);
    double dividend;
    sscanf(input, "%lf", &dividend);
    printf("Please enter the second number as an divisor: ");
    read_line(input, input_size);
    double divisor;
    sscanf(input, "%lf", &divisor);
    double result = divide(dividend, divisor);
    printf("The result of %g / %g is %g\n", dividend, divisor, result);
}

void print_help_message()
{
    printf("Available functions:\n"
           "1: Add two numbers\n"
           "2: Subtract a value from a number\n"
           "3: Multiply two numbers\n"
           "4: Divide two numbers\n");
}