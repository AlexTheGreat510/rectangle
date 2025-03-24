#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

/* some error defines */

#define ERROR       true
#define NO_ERROR    false

/* function to repeat string */

char *repeat_str(char *str, size_t count)
{
    if (count == 0) return NULL;
    char *ret = malloc (strlen (str) * count + count);
    if (ret == NULL) return NULL;
    strcpy (ret, str);
    while (--count > 0)
    {
        strcat (ret, "");
        strcat (ret, str);
    }
    return ret;
}

/* function to be run by program */

bool main()
{
    /* default rectangle info */

    int rectangle_width = 5;
    int rectangle_height = 5;
    char rectangle_atom[] = "*";

    /* take user input for rectangle info */

    printf("Enter rectangle width: ");
    scanf("%d", &rectangle_width);

    printf("Enter rectangle height: ");
    scanf("%d", &rectangle_height);

    printf("Enter rectangle atom: ");
    scanf("%s", &rectangle_atom);

    /* generate rectangle row based on info */

    char *rectangle_row = repeat_str(rectangle_atom, rectangle_width);

    /* generate rectangle based on info */

    for (int i=1; rectangle_height>=i; i++)
        puts(rectangle_row);

    /* return no error at the end */

    return NO_ERROR;
}
