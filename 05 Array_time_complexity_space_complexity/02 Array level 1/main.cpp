#include<iostream>
#include<limits.h>
using namespace std;
// void printArray(int arr[], int size){
//    for(int i=0; i<size;i++){
//     cout << arr[i]<<" ";
//    }
//    cout << endl;

// }
// present -> true;
// absent -> flase;

// bool linearSearch(int arr[], int size, int target)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == target)
//         {
//             // found
//             return true;
//         }
//     }
//     // not found
//     return false;
// }
    // void countZeroOne(int arr[], int size){
    //     int zeroCount = 0;
    //     int oneCount = 0;
    //     for(int i =0; i<size; i++){
    //         if(arr[i]== 0){
    //             zeroCount++;
    //         }
    //         if(arr[i] == 1){
    //             oneCount++;
    //         }
    //     }
    //     cout <<"Zero count:"<<zeroCount<<endl;
    //     cout << "one count:"<< oneCount<<endl;
    // }
 int findMinimumArray(int arr[], int size){
    int minAns = INT_MAX;
    for(int i = 0; i<size; i++){
        if(arr[i]<minAns){

            minAns = arr[i];

        }
    }
    return minAns;
 }


int main()
{

    int arr[]= {1,2,24,25,3,6,7};
    int size = 7;

    int minimum = findMinimumArray(arr,size);
    cout <<"Minimum Number is:"<< minimum <<endl;
    



    // // -2 to the power 31
    // cout << INT_MIN <<endl; //-2147483648 

    // // 2 to the power 31 -1
    // cout << INT_MAX <<endl; // 2147483647 















//     int arr[] = {0,1,1,1,1,0,0,0,1,0};
//     // 0 -> 5
//     // 1 -> 5
//    int size = 10;
//    countZeroOne(arr,size);









    // int arr[5] = {2, 4, 5, 6, 10};
    // int size = 5;
    // int target = 10;
    // bool ans = linearSearch(arr, size, target);

    // if (ans == 1)
    // {
    //     cout << " target found" << endl;
    // }
    // else
    // {
    //     cout << "target not found" << endl;
    // }

    // function call
    // printArray(arr, size);
    // array creation
    // int arr[101];
    // char ch[102];
    // bool flages[900];
    // short snum[1000];

    // int a[100];
    // cout << "Adress of a :" << &a << endl;
    // cout << "Size of a :"<< sizeof(a) << endl;

    // int arr[10];
    // cout << "Size of arr: "<< sizeof(arr)<< endl;
    // cout << "Base address is Arr is : "<< &arr[0] << endl;
    // cout << "Base address is Arr is : "<< &arr << endl;

    // array indexing
    // int arr[5] = {5,8,9,12,13};
    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;
    // cout << arr[3] << endl;
    // cout << arr[4] << endl;

    /* taking input of array and double the each value inside array and print that*/
    // int n = 5;
    // for(int i = 0; i<n; i++){
    //     cout << "Enter the value for index: "<< i <<" ";
    //     cin >> arr[i];
    //     cout << endl;
    // }
    // cout << " Printing the array"<< endl;
    // for(int i = 0; i<n; i++){

    //     cout << arr[i]<<" ";

    // int arr[10];
    // int n = 10;
    // for(int i = 0; i<n; i++){
    //     cin >> arr[i];
    // }
    // cout <<"Printing after taking input"<< endl;
    // for(int i = 0; i<n ; i++){
    //     cout << arr[i]<<" ";
    // }
    // cout << endl;

    // // double up
    // for(int i =0; i<n; i++){

    //     arr[i] = 2*arr[i];
    // }

    // // print
    // cout <<"Print after double up "<<endl;
    // for(int i = 0; i< n; i++){
    //     cout << arr[i]<< " ";

    /* taking in array and print the sum of it */

    // int n = 5;
    // int arr[5];
    // // taking input in array
    // cout<< " Enter the input "<< endl;
    // for(int i = 0; i<n; i++){
    //     cin >> arr[i];

    // }
    // // calculation sum;
    // int sum = 0;
    // for(int i = 0; i<n; i++){
    //     sum = sum + arr[i];
    // }
    // cout <<" Printing sum : "<< sum << endl;

    // linear serch

    // int arr[5] ={2,3,45,8,10};
    // int target = 10;
    // int n = 5;
    // bool flag = 0;
    // // 0 -> not found
    // // 1 -> found

    // for(int i = 0; i<n; i++){
    //     if(arr[i]== target){

    //         flag = 1;
    //         break;
    //     }
    // }
    // if(flag == 1){
    //     cout <<"target found";

    // }
    // else{
    //     cout << "target not found";
    // }

    return 0;
}