#include<iostream> //preprocesser
using namespace std;
int main(){//function
   int a[100]={0,1,2,3,4,5,6,7};
   cout<<a[0]<<endl;
cout<<a[1]<<endl;
cout<<a[2]<<endl;
cout<<a[3]<<endl;
cout<<a[4]<<endl;
cout<<a[5]<<endl;
cout<<a[6]<<endl;
cout<<a[7]<<endl;

//we can laso change the array
a[1]=5;
cout<<"the changed value of index 1 is "<<a[1];


    return 0;
}