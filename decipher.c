#include <stdio.h>
#include <string.h>

int hex_to_int(char c){
        int first = c / 16 - 3;
        int second = c % 16;
        int result = first*10 + second;
        if(result > 9) result--;
        return result;
}

int hex_to_ascii(char c, char d){
        int high = hex_to_int(c) * 16;
        int low = hex_to_int(d);
        return high+low;
}

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
    char buf = 0;
    char str;
    for(int i = 0; i<strlen(secret);i++)
    {
        str = decipher(secret[i]);
        if(i % 2 != 0){
            printf("%c", hex_to_ascii(buf, str));
        }else{
            buf = str;
        }
    }
    return 0;
}

