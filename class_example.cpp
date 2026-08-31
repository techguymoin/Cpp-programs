#include<iostream>
using namespace std;
class  triangle{
    private:
    int height;
    int base;
    public:
    int get_area(int x,int y){
        
        height=x;
        base=y;
    }
    int area(){
        cout<<0.5*base*height;
    }
};
int main(){
    triangle t;
    t.get_area(10,10);
    t.area();
return 0;
}