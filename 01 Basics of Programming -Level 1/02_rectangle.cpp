#include<iostream>
using namespace std;

int main(){
    
    int n;
    int m;
    cin >> n >>m;
    for(int row = 0; row < n; row++){

        for(int col = 0; col < m; col++ ){

            cout<<"* ";

        }
        cout<<endl;
    }
    return 0;
}
/*
Output:
5 7
* * * * * * * 
* * * * * * * 
* * * * * * *
* * * * * * *
* * * * * * *
*/