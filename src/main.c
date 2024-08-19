#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "stdbool.h"
#include "calculator.h"

void run_sum_calculation()
{
}

void read_line(char *input, const size_t input_size)
{
    fgets(input, input_size, stdin);
    input[strcspn(input, "\r\n")] = 0;
}

void print_help_message()
{
    printf("Available functions:\n"
           "1: Add two numbers\n"
           "2: Subtract a value from a number\n"
           "3: Multiply two numbers\n"
           "4: Divide two numbers\n");
}

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