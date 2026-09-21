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
    string department;
    string name;
    string subject;
    
    void getinfo(){
        cout<<name<<endl;
        cout<<department<<endl;
        cout<<subject<<endl;
        cout<<salary<<endl;
    }
};
int main(){
    teacher t1("Moin","CSE","C++",100000);
    t1.getinfo();
    return 0;
}