// based on:
// https://code-maven.com/slides/python-programming/ctypes-hello
#include <stdio.h>

int global_sum = 0;

char * echo(char * what)
{
   return what;
}

int add_int(int a, int b)
{
    global_sum += a+b;
    return global_sum;
}



int main(void)
{
    printf("hello\n");
    printf("%d\n", add_int(2, 3));
    printf("%s\n", echo("Foo"));
    return 0;
}

