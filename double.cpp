#include<iostream>
using namespace std;

int main(){

int i = 7;
int *ptr = &i;

int** ptr2 = &ptr;

cout<< i<< " "<< *ptr << " "<< **ptr2 << endl;

return 0;
}