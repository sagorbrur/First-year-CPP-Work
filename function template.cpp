//using template function for finding maximum or minimum
#include<iostream>
using namespace std;
template <class T>
T Large(T n1,T n2)
{
    return (n1>n2) ? n1:n2;
}
int main()
{
    int i1,i2;
    float f1,f2;
    char c1,c2;
    cout<<"enter two integer: ";
    cin>>i1>>i2;
    cout<<Large(i1,i2)<<" is Large.";
    cout<<"\n\nEnter two floating point: ";
    cin>>f1>>f2;
    cout<<Large(f1,f2)<<" is large.";
    cout<<"\n\nEnter two character: ";
    cin>>c1>>c2;
    cout<<Large(c1,c2)<<" has larger ASCII value";
    return 0;
}
