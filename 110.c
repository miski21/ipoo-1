#include <stdio.h>

main()
{
    char c, tab, bk, bl;
    tab='\t';
    bk='\b';
    bl='\\';

    while((c = getchar ()) != EOF)
        if(c == '\t')
            printf("%c", tab);
        else if(c == '\b')
            printf("%c", bk);
        else if(c == '\\')
            printf("%c", bl);
}
