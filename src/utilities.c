#include "stdio.h"
#include "utilities.h"
#include "string.h"

void read_line(char *buffer, const size_t buffer_size)
{
    fgets(buffer, buffer_size, stdin);
    buffer[strcspn(buffer, "\r\n")] = 0;
}