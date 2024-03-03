#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int row = 0; row < n; row++)
    {
        // space
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }
        // stars
        for (int col = 0; col < row + 1; col = col + 1)
        {
            // print star for first and last col
            if (col == 0 || col == row + 1 - 1)
            {
                cout << "* ";
            }
            else
            { // for every col btw 1st and last col, print spaces

                cout << "  ";
            }
        }

        cout << endl;
    }
    return 0;
}