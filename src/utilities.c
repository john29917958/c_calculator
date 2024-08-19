#include "stdio.h"
#include "utilities.h"
#include "string.h"

void read_line(char *input, const size_t input_size)
{
    fgets(input, input_size, stdin);
    input[strcspn(input, "\r\n")] = 0;
}