#include <stdio.h>

char *slice(char st[], int m, int n)
{
    static char sliced[100]; // Static array to hold the sliced part (assuming max length 100)
    int i = 0;

    while (m < n && st[m] != '\0')
    {
        sliced[i] = st[m]; // Copy characters from the original string
        m++;
        i++;
    }
    sliced[i] = '\0'; // Null-terminate the new string
    return sliced;    // Return pointer to the sliced string
}

int main()
{
    char st[] = "Rajin_vai";
    printf("%s", slice(st, 1, 6)); // Should print "ajin_ "
    return 0;
}
