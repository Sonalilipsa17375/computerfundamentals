#include<iostream>
using namespace std;

void update(int *ptr){

 cout<< ptr  <<endl;
 *ptr = *ptr+1;
 cout<< ptr  <<endl;


}

int main(){

    int p = 7;
    int *ptr = &p;
    update(ptr);

    return 0;
}