/*This is my first c++ program*/
//this is comment.
#include<iostream>
using namespace std;
#define PI 3.1416
#define NEWLINE '\n'
int main()
{
    int a,b,c;
    double r=5.0,circle;
    cin>>a;
    cin>>b;
    c=(a>b)? a:b;
    circle=PI*r*r;
    cout<<circle;
    cout<<NEWLINE;
    cout<<c;
    cout<<NEWLINE;
    cout<<"welcome "<<"sagor sarker "<<"to the new world ";
    return 0;
}
