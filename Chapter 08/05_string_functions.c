#include <stdio.h>
#include <string.h>
// This function gives us the number of characters in a string exclude the null character.
int main()
{
    char st[] = "harry";
    char a1[56] = "harry";
    char a2[56] = "avai";
    // printf("String length:%d\n", strlen(st));
    // char target[30];
    // strcpy(target, st);
    // printf("%s, %s\n\n", target, st);

    strcat(a1, a2);
    // So this concatenate two strings in one.
    printf("%s\n", a1);
    // strcmp compares two strings, if the are equal it returns 0
    // if the first one comes first in ascii value then negative, else positive
    int a = strcmp("a1", "a2");
    printf("%d\n", a);
    int b = strcmp("far", "near");
    printf("%d\n", b);
    return 0;
}