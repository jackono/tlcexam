#include <stdio.h>
#include <string.h>

char decipher(int key)
{
    switch(key)
    {
        case 'T': return '0'; break;
        case 'H': return '1'; break;
        case 'E': return '2'; break;
        case 'Q': return '3'; break;
        case 'U': return '4'; break;
        case 'I': return '5'; break;
        case 'C': return '6'; break;
        case 'K': return '7'; break;
        case 'B': return '8'; break;
        case 'R': return '9'; break;
        case 'O': return 'A'; break;
        case 'W': return 'B'; break;
        case 'N': return 'C'; break;
        case 'F': return 'D'; break;
        case 'Y': return 'E'; break;
        case 'X': return 'F'; break;
    }
}

int main()
{
    char secret[1000] = "TQTHIKUIUNUQUXUFUITKTEIUUXTETQIUUIUNUQUXUFUNURICUIUQUXUYIUUIUYIUHH";

    for(int i = 0; i<strlen(secret);i++)
    {
        printf("%c", decipher(secret[i]));
    }
    return 0;
}