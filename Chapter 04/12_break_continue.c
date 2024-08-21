#include <stdio.h>
int main()
{
    for (int i = 0; i < 15; i++) // just writting i means i is a no zero value
    {
        if (i == 5)
        {
            // break; //exit the loop now
            continue; // skip this iteration now
        }
        printf("i is %d\n", i);
    }
    return 0;
}

// continue is used to skip.