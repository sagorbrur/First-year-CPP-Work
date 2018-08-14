//array and pointer
#include<iostream>
using namespace std;
int main()
{
    float a[5];
    float *pt;
    cout<<"Displaying adress using arrays: "<<endl;
    for(int i=0;i<5;++i)
    {
        cout<<"&a["<<i<<"]= "<<&a[i]<<endl;

    }
    pt=a;
    cout<<"\nDisplaying adress using pointer: "<<endl;
    for(int i=0;i<5;++i)
    {
        cout<<"pt+"<<i<<"="<<pt+i<<endl;
    }
    return 0;
}
