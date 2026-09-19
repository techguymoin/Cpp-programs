#include<iostream>
using namespace std;
int add(int x,int y){
        int z;
        z=x+y;
        return z;
    }
int main(){


    int a;
    int b;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter your second number: ";
    cin>>b;
    cout<<add(a,b);   
    return 0;
}