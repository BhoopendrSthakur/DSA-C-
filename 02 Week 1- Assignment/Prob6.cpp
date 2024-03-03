// find the factorial of a number
#include<iostream>
using namespace std;

int main()
{
    int n=5;
    int fact=1;
    cout << "Enter the no :"<<endl;
    
    for(int i=n; i>0; i--){
        fact = fact*i;
    }
    cout << fact;
    return 0;
}

/*


- 8. Check valid triangle or not
- 9. Print max of three numbers
*/