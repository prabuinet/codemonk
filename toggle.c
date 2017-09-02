#include <stdio.h>
 
int main()
{
    char chr;
    
    while((chr = getchar()) != EOF) {
        
        if(chr < 97) {
            chr = chr + 32;
        } else {
            chr = chr - 32;
        }
        
        printf("%c", chr);
    }
    
    return 0;
}

