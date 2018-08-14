//class sample
#include<iostream>
using namespace std;
class CRectangle{
    int x,y;
    public:
        void set_values(int,int);
        int area(){return(x*y);}
};
void CRectangle::set_values(int a,int b){
    x=a;
    y=b;
}
int main()
{
    int a,b;
    cout<<"enter value: ";
    cin>>a>>b;
    CRectangle rect;
    rect.set_values(a,b);
    cout<<"area: "<<rect.area();
    return 0;
}
