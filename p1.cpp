#include<iostream>
using namespace std;



int main(){

    int num =4;

    int *ptr = &num;

    // cout<< num << endl;

    // value increment
    *ptr =*ptr +1;
    cout<< *ptr<<endl;

    // pointer copied

    int i =8;
    int *t = &i;
    *t = *t+1;
    cout<<*t<<endl;


   int *q = ptr;
   cout<< *q << endl;
   cout<< q << endl;
     

    return 0;
}

// stores addresss
// created a pointer and address daal diya
// value nikalo star se

