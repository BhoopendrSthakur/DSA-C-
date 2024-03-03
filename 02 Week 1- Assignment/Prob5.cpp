// Print Conting form n to 1
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the n:" <<endl;
    cin >> n;
    for(int i =n; i>0; i--){
        cout << i;
        if(i>1){
            cout<<",";
        }
    }
    return 0;
}