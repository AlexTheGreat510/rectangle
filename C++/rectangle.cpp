#include <iostream>

using namespace std;

/* some error defines */

#define ERROR       1
#define NO_ERROR    0

/* function to be run by program */

int main()
{
    /* default rectangle info */

    int rectangle_width = 5;
    int rectangle_height = 5;
    string rectangle_atom = "*";

    /* take user input for rectangle info */

    cout << "Enter rectangle width: ";
    cin >> rectangle_width;

    cout << "Enter rectangle height: ";
    cin >> rectangle_height;

    cout << "Enter rectangle atom: ";
    cin >> rectangle_atom;

    /* generate rectangle row based on info */

    string rectangle_row;

    for (int i=1; rectangle_width>=i; i++)
        rectangle_row += rectangle_atom;

    /* generate rectangle based on info */

    for (int i=1; rectangle_height>=i; i++)
        cout << rectangle_row << endl;

    /* return no error at the end */
    return NO_ERROR;
}
