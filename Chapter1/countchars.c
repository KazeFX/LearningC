#include <stdio.h>

int main()
{
    int c, n1;
    n1 = 0;

    // count lines 
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++n1;
        }
        printf("%d\n",n1);
    }
}
