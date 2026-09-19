#include<iostream>
using namespace std;
int change(int);
int change(int* x){
   *x=100;
   cout<<*x;
}
int main(){
    int a=10;
    change(&a);//we can change value by using call by reference
    return 0;
}