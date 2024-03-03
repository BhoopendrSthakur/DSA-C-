// check valid triangle or not
#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the sides of triangle"<<endl;
    cin >>a>>b>>c;
    if(((a+b)>b) && ((a+c)>b) && ((b+c)>a)){
        cout<<"Triangle is valid"<<endl;
    }
    else{
        cout<<"Triangle is Not valid"<<endl;
    }
    return 0;
}