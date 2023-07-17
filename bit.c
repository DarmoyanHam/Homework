#include <stdio.h>

int main()
{
    int a;
    scanf("%i", &a);
    int pos = 8; 
    if((a & pos) == 0)
    {
        a = a ^ pos;
    }
    printf("%i\n", a);
    
    return 0;
}
