#include <iostream>
using namespace std;
class teacher{
    private:
    double salary;
    public:
    teacher(string name,string department,string subject,double salary){
    this->name=name;
    this->department=department;
    this->subject=subject;
    this->salary=salary;

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