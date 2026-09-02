#include <iostream>
using namespace std;
class employee
{
private:
    int id;
    static int count;

public:
    void setdata()
    {
        cout << "Enter the id : ";
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "the id of the employee is " << id << " and its number is " << count << endl;
    }
    static void displaycount(){
        cout<<" the count is "<<count<<endl;
    }
};
int employee ::count;
int main()
{
    employee moin, Altamash, khaja, sadath;
    moin.setdata();
    moin.getdata();
    moin.displaycount();
    Altamash.setdata();
    Altamash.getdata();
    Altamash.displaycount();
    khaja.setdata();
    khaja.getdata();
    khaja.displaycount();
    sadath.setdata();
    sadath.getdata();
    sadath.displaycount();
    return 0;
}