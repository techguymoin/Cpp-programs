#include<iostream>
using namespace std;
typedef struct employee
{
    int a;
    char c;
    float d;
    /* data */
}emp;

int main(){
    emp e1;
    e1.a=10;
    e1.c='A';
    e1.d=100.1;
    cout<<e1.a<<endl<<e1.c<<endl<<e1.d;
    return 0;

}