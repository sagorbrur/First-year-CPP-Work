#include<iostream>
#include<string>
using namespace std;
class Rectangle
{
    public:
    int x,y;
   int getarea() {return x*y;}
};
int main()
{
    Rectangle a = Rectangle(5,10);
    a.getarea();
    //cout<<a;


}
