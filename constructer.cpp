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
    //non parameterised construtor
    Teacher(){
        cout<<"hi iam a constructer"<<endl;/*it will be printed 
        everytime we make an object*/ 
        dept="CS";//it will set dept = CS
    }
    string name;
    string dept;
    string sub;
    
    //methods or memberfunctions
    
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
    Teacher t1;//constuctor call
    
    t1.name="Moin";
    t1.sub="C++";
   
    t1.setsalary(25000);
    cout<<t1.name<<endl;
    cout<<t1.sub<<endl;
    cout<<t1.dept<<endl;
    cout<<t1.getsalary()<<endl;



   

    return 0;
}