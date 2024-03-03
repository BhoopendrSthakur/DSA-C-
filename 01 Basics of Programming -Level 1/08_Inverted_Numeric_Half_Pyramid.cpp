#include<iostream>
using namespace std;

int main(){
    int n = 5;

    // outer loop traverse from 0 to n-1
    for(int row = 0; row<n; row++){
        // inner loop traverse form 0 to n-row and print col+1
        for(int col = 0; col< (n-row); col = col+1){
            cout<< col+1 <<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*
Output:
1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1
*/