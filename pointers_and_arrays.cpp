#include<iostream> //preprocesser
using namespace std;
int main(){//function
   
    int marks[10]={1,2,3,4,5,6,7,8,9,10};
    int *p= marks; //marks will represent the first address of array
   cout<<*p<<endl;
   cout<<*(p+1)<<endl; //it will print index number 1 value
   cout<<*(p+2)<<endl; //it will print index number 2 value
   cout<<*(p+3);//it will print the value of index number 4
    return 0;
}