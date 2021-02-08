#include <stdio.h>

int main()
{
    int highest_n = 0;
    int final_count = 0;
    int count;
    int collatz;
    
    for(int i = 1; i < 1000; i++)
    {   
        count = 0;
        collatz = i;

        while(collatz!=1)
        {
            if(collatz % 2 == 0)
                collatz = collatz/2;
            else
                collatz = 3*collatz + 1;
            count++;
        }
        if(count > final_count)
        {
            final_count = count;
            highest_n = i;
        }
    }
    printf("Highest number: %d\nNumber of chains:%d", highest_n,final_count);
        
    return 0;
}