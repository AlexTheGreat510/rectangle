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
    /* default cube info */

    int cube_width = 5;
    int cube_height = 5;
    char cube_atom[] = "*";

    /* take user input for cube info */

    printf("Enter cube width: ");
    scanf("%d", &cube_width);

    printf("Enter cube height: ");
    scanf("%d", &cube_height);

    printf("Enter cube atom: ");
    scanf("%s", &cube_atom);

    /* generate cube row based on info */

    char *cube_row = repeat_str(cube_atom, cube_width);

    /* generate cube based on info */

    for (int i=1; cube_height>=i; i++)
        puts(cube_row);

    /* return no error at the end */

    return NO_ERROR;
}
