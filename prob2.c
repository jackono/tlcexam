#include <stdio.h>

int main()
{

    int sum, n1, n2 = 1;
    int limit = 4000000;
    int final_sum = 0;
    
    while(n1<=limit)
    {
        if(n1 % 2 == 0)
            final_sum = final_sum + n1;
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
    }
    printf("Sum of even Fibbonacci numbers: %d", final_sum);
    
    return 0;
}