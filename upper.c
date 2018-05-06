#include <stdio.h>

#include <ctype.h>

int main ()
{
    char ch;

    printf("\n Enter a character:");
    scanf("%c",&ch);

    if(isupper(ch))

    printf("%c is a upper case",ch);

    else
        printf("%c is not a upper case",ch);

    return 0;


}
