#include <stdio.h>
int main()
{
    char st[30];
    gets(st); // the entered string is stored in st!
    puts(st);
    printf("hey1");
    printf("%s", st); // gets er por automatics under line e jay, but printf er por jay nah
    printf("hey2");
    return 0;
}