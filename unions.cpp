#include<iostream> //preprocesser

using namespace std;

 typedef union money{
    int doller;
    float ruppe;
    float pounds;
}m;
  int main(){//function
    m m1;
    m1.doller=1000;
    m1.ruppe=1000;
    m1.pounds=1000;
    /*here we can see that doler and ruppe us getting garbage value cause they are sharing
    memory location*/
   cout<<" the value of doller:"<<m1.doller <<endl;
cout<<" the value of ruppe :"<< m1.ruppe<<endl;
    cout<<" the value of pounds :"<< m1.pounds<<endl;
    return 0;
}