#include<iostream>
using namespace std;
int main()
{
    int *pc,c;
    c=5;
    cout<<"adress of c(&c) is : "<<&c<<endl;
    cout<<"value of c(c) is : "<<c<<endl;
    pc=&c;
    cout<<"adress that pointer pc holds: "<<pc<<endl;
    cout<<"the value of pc is : "<<*pc<<endl;
    c=11;
     cout<<"adress that pointer pc holds: "<<pc<<endl;
    cout<<"the value of pc is : "<<*pc<<endl;
    *pc=2;
    cout<<"adress of c(&c) is : "<<&c<<endl;
    cout<<"value of c(c) is : "<<c<<endl;
    return 0;
}
