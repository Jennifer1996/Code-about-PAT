#include <stdio.h>
int main()
{
    unsigned int n;
    int number = 0;
    scanf("%u",&n);
    while(n != 1)
    {
        if((n % 2) != 0)
        {
            n = (3*n+1)/2;
            number++;

        }
        else{
            n = n/2;
            number++;
        }
    }
    printf("%d",number);
    return 0;
}

