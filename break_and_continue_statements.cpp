#include<iostream>
using namespace std;
int main(){
    cout<<"example of break statement";
    for (int i = 0; i < 40; i++)
    {
        /* code */
        cout<<i<<endl;
        if(i==2){
            break;//it will eit the loop
        }
    }
    cout<<"example of continue statement";
    for (int j = 0; j < 40; j++)
    {
        /* code */
         if(j==2){
            continue;//it will skip the 2 and continue
        }
        cout<<j<<endl;
    }
    

    
    return 0;
}