#include<iostream> //preprocesser
#include<iomanip>
using namespace std;
int main(){//function
    /*manupulators are the special functions
    which which control and format cin and cout outputs
    examples are endl and setw*/
    int a=10,b=200,c=3000;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
    cout<<"the value of c is "<<c<<endl;

    cout<<"the value of a is "<<setw(4)<<a<<endl;
    cout<<"the value of b is "<<setw(4)<<b<<endl;
    cout<<"the value of c is "<<setw(4)<<c<<endl;
    return 0;
}