#include<iostream>
using namespace std;

int main(){
    int n= 5;
    
    // outer loop traverse form 0 to n-1
    for(int row = 0; row<n; row++){
        // inner loop traverse from 0 to n-row
        for(int col = 0; col< (n-row); col++){
            cout<<"* ";

        }
        cout<<endl;
    }
    return 0;
}
/*
Output:
* * * * * 
* * * *
* * *
* *
*
*/