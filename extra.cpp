// my first pointer
#include <iostream>
using namespace std;
int main ()
{
int a, b;
int * p;
p = &a;
*p = 10;
p = &b;
*p = 20;
cout << "firstvalue is " << a << endl;
cout << "secondvalue is " << b << endl;
return 0;
}
