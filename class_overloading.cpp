#include <iostream>
using namespace std;
class teacher{
    private:
    double salary;
    public:
    teacher(string name1,string department1,string subject1,double salary1){
    name=name1;
    department=department1;
    subject=subject1;
    salary=salary1;
    }
    teacher(string classname1,int age1){
        classname=classname1;
        age=age1;
    }
    string department;
    string name;
    string subject;
    string classname;
    int age;
    
    void getinfo(){
        cout<<name<<endl;
        cout<<department<<endl;
        cout<<subject<<endl;
        cout<<salary<<endl;
        cout<<"age is :"<<age<<endl;
        cout<<"classname :"<<classname;
    }
     void getinfo2(){
        
        cout<<"age is :"<<age<<endl;
        cout<<"classname :"<<classname;
    }
};
int main(){
    teacher t1("Moin","CSE","C++",100000);
    teacher t2("class a",35);
    t1.getinfo();//for object 1
    t2.getinfo2();//for object 2
    return 0;
}