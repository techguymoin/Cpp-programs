#include<iostream> //preprocesser
using namespace std;
int main(){//function
   int arr[2][3]={
    {1,2,3},//it contains 2 rows and three coloumns
    {1,2,3}
   };
   int i,j;
   for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        cout<<"the value at "<<i<<","<<j<<" is "<<arr[i][j]<<endl;
    }
   }

    
   
    return 0;
}