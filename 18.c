#include <stdio.h>

main()
{
    int c, n1, eb, tb;

    n1 = eb = tb = 0;
    while ((c = getchar ()) != EOF)
        if (c == ' ')
            ++eb;
        else if (c == '\t')
            ++tb;
        else if (c == '\n')
            ++n1;
    printf("\n%d %d %d\n", n1, eb, tb);
}
