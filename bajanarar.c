#include <stdio.h>

int main()
{
    int a, b;
    scanf("%i %i", &a, &b);
    int c;
    if(a < b)
    {
        c = a;
    }
    else
    {
        c = b;
    }
    
    int max = 1;
    for(int i = 1; i <= c; ++i)
    {
        if(a % i == 0 && b % i == 0)
        {
            max = i;
        }
    }
    printf("%i\n", max);
    return 0;
}
