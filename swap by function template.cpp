
//c++ program to swap data by function template
#include<iostream>
using namespace std;
template<typename T>
void Swap(T &n1,T &n2)
{
    T temp;
    temp=n1;
    n1=n2;
    n2=temp;
}
int main()
{
    int i1,i2;
    float f1,f2;
    char c1,c2;
    cout<<"Enter two integer for swap: ";
    cin>>i1>>i2;
    Swap(i1,i2);
    cout<<"\nafter swaping"<< "\ni1= "<<i1<<"\ni2= "<<i2;
    cout<<"\n\nEnter two floating point for swap: ";
    cin>>f1>>f2;
    Swap(f1,f2);
    cout<<"\nafter swaping: "<<"\nf1= "<<f1<<"\nf2= "<<f2;
    cout<<"\n\nenter two character for swap: ";
    cin>>c1>>c2;
    Swap(c1,c2);
    cout<<"\nafter swaping : "<<"\nc1= "<<c1<<"\nc2= "<<c2;
    return 0;
}
