# ipoo-1
#include <stdio.h>

/* print Faharenheit-Celcius table
main()
{
    int fahr;

    for (fahr = 300; fahr >=0; fahr = fahr - 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}*/
/* COUNT TANS, NEWLINE, ' '*/
main()
{
    int c, n1, eb, tb;

    n1 = eb = tb = 0;
    while ((c = getchar ()) != EOF)
        if (c == ' ')
            ++eb;
        if (c == '\t')
            ++tb;
        if (c == '\n')
            ++n1;
    printf("%d %d %d\n", n1, eb, tb);
}

