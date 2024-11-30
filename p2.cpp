#include<iostream>
using namespace std;

int main(){

    int arr[10] = {2,5,8};

    cout<< arr <<endl; // address of first memory block
    cout<< &arr[0]<<endl; // address at arr[0]
    cout<< *arr<<endl;
    cout<< *arr +1<<endl;
    cout<< *(arr+1) <<endl;

    int a[10] = {0};

    for(int i=0;i<10;i++){
        int *ptr = &a[i];
        cout<< *ptr+ (2*i) << " ";
    }
    // value at position i ---  arr[i] = *(arr+i)

    return 0;
}