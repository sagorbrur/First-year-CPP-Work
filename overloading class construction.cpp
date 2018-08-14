//overloading class constructor
#include<iostream>
using namespace std;

class CRectangle{
    int w,h;
    public:
        CRectangle();
        CRectangle(int,int);
        int area(void){return(w*h);}
};
CRectangle::CRectangle(){
    w=5;
    h=5;
}
CRectangle::CRectangle(int a,int b){
    w=a;
    h=b;

}
int main()
{
    CRectangle rect(3,4);
    CRectangle rectb;
    cout<<"rect area: "<<rect.area()<<endl;
    cout<<"rectb area: "<<rectb.area()<<endl;
    return 0;
}
