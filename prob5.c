#include <stdio.h>

int luckySum(int a, int b, int c)
{
    if(a == 13)
        return 0;
    else if(b == 13)
        return a;
    else if(c == 13)
        return a + b;
    else return a + b + c;
}

int main()
{
    printf("%d",luckySum(1,13,3));
    return 0;
}