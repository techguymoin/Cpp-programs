#include <iostream>
using namespace std;
class shop
{
private:
    int itemid[10];
    int itemprice[10];
    int counter;

public:
    void initCounter()
    {
        counter = 0;
    }
    void setprice();
    void displayprice();
};
void shop ::setprice()
{
    for (int i = 0; i < 10; i++)
    {
        /* code */
        cout << "Enter item id :" ;
        cin >> itemid[i];
        cout<<"Enter price of item:";
        cin>>itemprice[i];
    }
}
void shop ::displayprice()
{
    for (int i = 0; i < 10; i++)
    {
        /* code */
        cout << "item id :" << itemid[i]<<endl;
        cout<<"price of item"<<itemprice[i]<<endl;;
    }
}

int main()
{
    shop Dukaan;
    Dukaan.setprice();
    Dukaan.displayprice();
    return 0;
}