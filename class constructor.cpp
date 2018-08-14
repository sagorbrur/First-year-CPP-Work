//class constructor
#include<iostream>
using namespace std;

class CRectangle{
    int width,height;
    public:
        CRectangle(int,int);
        int area(){return(width*height);}
};
CRectangle::CRectangle(int a,int b){
    width=a;
    height=b;

}
int main()
{
    int a,b;
    cout<<"enter a: ";
    cin>>a;
    for(b=0;b<a;b++)
    cout<<b<<"\n";
    CRectangle rect(3,4);
    CRectangle rectb(10,10);
    cout<<"rect area: "<<rect.area()<<endl;
    cout<<"rectb area : "<<rectb.area()<<endl;
    return 0;
}
