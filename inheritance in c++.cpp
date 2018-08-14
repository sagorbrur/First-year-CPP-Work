#include<iostream>
using namespace std;
class rectangle
{
    protected:
    float l,b;
    public:
    rectangle():l(0.0),b(0.0)
    {
        cout<<"enter length: ";
        cin>>l;
        cout<<"enter breadth: ";
        cin>>b;
    }
};
//area class derived from base class rectangle
class area: public rectangle
{
  public:
  float calc()
  {
      return l*b;
  }
};
//perimeter class is derived from base class rectanle
class perimeter: public rectangle
{
    public:
    float calc()
    {
        return 2*(l+b);
    }
};

int main()
{
   cout<<"enter data from first rectangle to fing area: "<<endl;
   area a;
   cout<<"area = "<<a.calc()<<"square meter\n\n"<<endl;
   cout<<"enter data for second rectangle to find perimeter: "<<endl;
   perimeter p;
   cout<<"\nperimeter = "<<p.calc()<<"meter"<<endl;
   return 0;
}
