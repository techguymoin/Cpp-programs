#include<iostream>
using namespace std;
int main(){
    //&----> (address at) Address operator
    //*---->(value at) Dereference operator
    int a=10;
    int *b=&a;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value at b is "<<*b<<endl;
    cout<<"the address of a is "<<&a<<endl;
    cout<<"the value of b is "<<b;
    
    return 0;
}