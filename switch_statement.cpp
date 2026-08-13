#include <iostream>
using namespace std;
int main()
{
    int day;
    cout<<"enter which day of week: ";
    cin>>day;
    switch(day){
        case 1:
        cout<<"monday";
        break;// if we dont use break then it will execute all the conditions
        case 2:
        cout<<"tuesday";
        break;
        case 3:
        cout<<"wednesday";
        break;
        case 4:
        cout<<"thursday";
        break;
        case 5:
        cout<<"friday";
        break;
        case 6:
        cout<<"saturday";
        break;
        case 7:
        cout<<"sunday";
        break;
        default:
        cout<<"you've return an invalid information";

    }
    return 0;
}