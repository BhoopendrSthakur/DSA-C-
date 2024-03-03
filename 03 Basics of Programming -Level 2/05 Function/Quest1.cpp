// write a function to print sum of three numbers
#include<iostream>
using namespace std;


void printSum(int a, int b, int c){
    int answer = a+b+c;
    cout <<" Sum is: "<< answer << endl;
}

int main()
{
    printSum(2,3,4);
    
    return 0;
}