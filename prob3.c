#include <stdio.h>

int dateFashion(int men, int women)
{
    if(men >=8 || women >= 8)
        return 2;
    else if(men <=2 || women <= 2)
        return 0;
    else 
        return 1;
}

int main()
{
    printf("%d",dateFashion(2, 5));
    return 0;
}