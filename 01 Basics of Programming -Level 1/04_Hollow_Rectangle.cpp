#include<iostream>
using namespace std;

int main()
{
    int n;
    int m;
    cin >>n>>m;
    // outer loop traverse form 0 to n-1
    for(int row=0; row<n; row++){
        // inner loop traverse form 0 to n-1
        for(int col = 0; col<m; col++){
            // if zeroth or last row,then print n times star
            if( row == 0 || row == n-1){
                cout<<"* ";
            }
            //if zeroth or last col, then print 1 time star
            else if (col == 0|| col == m-1){
                cout <<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout << endl;
    }
    return 0;
}
/*
Output:
* * * * * * 
*         *
*         *
* * * * * *
*/