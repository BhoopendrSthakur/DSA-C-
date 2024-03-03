// Print maximum of three no
#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    
    cout<<"Enter the three numbers"<<endl;
    cin >> a >> b >> c;
    if(a>=b && a>=c){
        cout<<"maximum no is "<<a<<endl;
    }
    else if (b>=a && b>=c)
    {
        
        cout <<"maximum no is "<<b<<endl;
    
    }
    else{
        cout<<"maximum no is "<<c<<endl;
    }
    return 0;
}