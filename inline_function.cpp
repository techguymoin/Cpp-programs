#include<iostream>
using namespace std;
inline int add(int x,int y){
        int z;
        z=x+y;
        return z;
    }
 int main(){

    //An inline function is used to reduce function-call overhead and make small functions execute faster.
    int a;
    int b;
    a=10;
    b=10;
    cout<<add(a,b)<<endl;   
    cout<<add(a,b)<<endl;  
    cout<<add(a,b)<<endl;  
    cout<<add(a,b)<<endl;   
    cout<<add(a,b)<<endl;
    cout<<add(a,b)<<endl;  
    cout<<add(a,b) <<endl; 
    cout<<add(a,b) <<endl; 
    cout<<add(a,b)<<endl;  
    cout<<add(a,b) <<endl; 

    return 0;
}