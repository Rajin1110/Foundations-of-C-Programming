#include<stdio.h>
int main()

{
    int a;
    char ch= 'a';
    ch= 'c';
  
    /*  \n-means a escape sequence. it means a new line
        \t-means a tab er moto onek gula space
        \"" string er balsal
        \\ means single back slash \
    */
    
    ch= '\n';
    printf("Hey I am good \n nice");


    return 0;
}


 /*
    "This is a backslash: \\\n"        # Shows a backslash
    "This is a double quote: \"\n"     # Shows a double quote
    "This is a single quote: '\n"      # Shows a single quote
    "This is a tab:\tIndented text\n"  # Shows a tab
    "This is a newline:\nNew line text\n"  # Shows a newline
    "This is a carriage return:\rOverwritten text\n"  # Shows a carriage return
    "This is a backspace:\bBackspaced\n"  # Shows a backspace
    "This is a form feed:\fForm feed text\n"  # Shows a form feed
 */