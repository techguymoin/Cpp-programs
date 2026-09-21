#include <iostream>
#include<string.h>
using namespace std;

class Teacher{
    //propertiesr or attributes
    /*by default it will be private it cannot be 
    accessed outside
    public  can be access outside
    */
   /*encapsulation is wraping up of data & member functions
   in a singlr unit
   -helpful for data hiding*/
    private:
    float salary;
    public:
    string name;
    string dept;
    string sub;
    
    //methods or memberfunctions
    void changedept(string newdept){
        dept=newdept;
    }
     //setter
    void setsalary(int s){
        salary=s;
    }
   //getter  
    double getsalary(){
        return salary;
    }

};

int main() {
    Teacher t1;
    Teacher t2;
    Teacher t3;
    Teacher t4;
    t1.name="Moin";
    t1.sub="C++";
    t1.dept="cs";
    t1.setsalary(25000);
    cout<<t1.name<<endl;
        cout<<t1.sub<<endl;
    cout<<t1.dept<<endl;
    cout<<t1.getsalary()<<endl;



   

    return 0;
}