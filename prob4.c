#include <stdio.h>

int sum(int a, int b, int c)
{
    if(a == c)
    {
        a = 0;
        c = 0;
    }
    if(a == b)
    {
        a = 0;
        b = 0;
    }
    
    return a + b + c;
}

int main()
{
    printf("Sum: %d", sum(5,5,1));
    return 0;
}