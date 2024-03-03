//Find the simple interest
#include<iostream>
using namespace std;

int main()
{
    int p,r,t;

    cout << "Enter the principle amount:"<<endl;
    cin >> p;

    cout <<"Enter the rate of interest in percentage:"<<endl;
    cin >> r;

    cout <<"Enter the time in years :"<<endl;
    cin >> t;

    cout << "Simple inerest is: "<< (p*r*t)/100 <<endl;
    return 0;
}
/*
Output:
Enter the principle amount:
5000
Enter the rate of interest in percentage:
11
Enter the time in years :
3
Simple inerest is: 1650
*/