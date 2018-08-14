#include<iostream>
using namespace std;
int main()
{
    string ch;
    int i,a,b,c;

    getline(cin,ch);
    cout<<"enter the value of i,a,b\n";
    cin>>i>>a>>b;
    c=a*b;
    cout<<ch<<"\n";
    cout<<"your entered value is "<<i;
    cout<<" and it's double is "<<i*2<<".\n";
    cout<<"the value of c is "<<c<<".\n";
    return 0;

}
