#include <iostream>

using namespace std;

/* some error defines */

#define ERROR       1
#define NO_ERROR    0

/* function to be run by program */

int main()
{
    /* default cube info */

    int cube_width = 5;
    int cube_height = 5;
    string cube_atom = "*";

    /* take user input for cube info */

    cout << "Enter cube width: ";
    cin >> cube_width;

    cout << "Enter cube height: ";
    cin >> cube_height;

    cout << "Enter cube atom: ";
    cin >> cube_atom;

    /* generate cube row based on info */

    string cube_row;

    for (int i=1; cube_width>=i; i++)
        cube_row += cube_atom;

    /* generate cube based on info */

    for (int i=1; cube_height>=i; i++)
        cout << cube_row << endl;

    /* return no error at the end */
    return NO_ERROR;
}
