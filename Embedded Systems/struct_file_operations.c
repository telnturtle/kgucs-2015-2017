#include <stdio.h>

int a_function(int a, int b)
{
    return (a < b);
}

int main()
{
    int (*function) (int, int) = a_function;

    printf("%d\n", function(1,2));
}

// struct file_operations name_fops = {
//     .owner = 1;
//     .open = 2;
// };
