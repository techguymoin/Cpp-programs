#include<iostream>
using namespace std;
int volume(double r,int h){
    cout<<"used first function"<<endl;
    return(3.14*r*r*h);
    
}
int volume(int a){
       cout<<"used second function"<<endl;
    return a*a*a;
     

}
int volume(int l,int b,int h){
    cout<<"used third function"<<endl;
    return l*b*h;
        

}
int main(){
    int a=10,b=20,c=30;
    cout<<"triangle volume:"<< volume(a,b)<<endl;
    cout<<"cube volume:"<<volume(a)<<endl;
    cout<<"Rectangle volume:"<<volume(a,b,c)<<endl;
    return 0;
}