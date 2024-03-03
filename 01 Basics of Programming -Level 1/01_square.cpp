#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Outer loop traverse from 0 t0 n-1
    for (int row = 0; row < n; row++)
    {
        // Inner loop traverse form 0 to n-1
        for (int col = 0; col < n; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

/*
Output:
* * * *
* * * *
* * * *
* * * *
*/