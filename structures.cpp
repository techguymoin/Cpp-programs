#include<iostream> //preprocesser
using namespace std;

struct employee
{
    /* data */
    int id;
    char charecter;
    float salary;
};
//we use structure for the collection of number of data types
int main(){//function
   struct employee Moin;
   Moin.id=1018;
   Moin.charecter='c';
   Moin.salary=101.1;
   cout<<"the id is "<<Moin.id<<endl;
   cout<<"the charecter is "<<Moin.charecter<<endl;
   cout<<"the salary is "<<Moin.salary;
   
    return 0;
}