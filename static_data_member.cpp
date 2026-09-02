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
};
int employee ::count;
int main()
{
    employee moin, Altamash, khaja, sadath;
    moin.setdata();
    moin.getdata();
    Altamash.setdata();
    Altamash.getdata();
    khaja.setdata();
    khaja.getdata();
    sadath.setdata();
    sadath.getdata();
    return 0;
}