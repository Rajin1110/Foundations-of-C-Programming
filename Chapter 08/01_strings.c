#include <stdio.h>
int main()
{
    // char st[] = {'a', 'b', 'c',  '\0'};
    char st[] = "abcd"; // same as previous line, null character automatically adds.
    for (int i = 0; i <= 4; i++)
    {
        printf("Character is %c \n", st[i]);
    }

    return 0;
}