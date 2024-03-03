// Find the compound interest
#include<iostream>
using namespace std;
#include<cmath> // Include the <cmath> header for the pow function

int main()
{
    double p = 10000, r=2, t=5;
    double A = p*(pow((1+ r/100),t));
    double CI = A-p;
    cout << "Compound interest is "<< CI;
    return 0;
}