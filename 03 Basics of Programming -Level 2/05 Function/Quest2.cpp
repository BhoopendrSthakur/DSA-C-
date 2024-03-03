// write a function to return sum of three numbers
#include<iostream>
using namespace std;

int printSum(int a, int b, int c){
    int ans = a + b + c;
    return ans;
}

int main()
{
    int sum = printSum(4,4,5);
    cout<< "Sum is "<< sum <<endl;
    
    return 0;
}