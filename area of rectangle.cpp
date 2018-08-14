/*Source Code to demonstrate the working of constructor in C++ Programming */
/* This program calculates the area of a rectangle and  displays it. */
#include<iostream>
using namespace std;
class area
{
    private:
    int length;
    int breadth;

    public:
    area(): length(5), breadth(2){}//constructor


    void GetLength()
    {
        cout<<"Enter length and breadth respectively: ";
        cin>>length>>breadth;
    }
    int areaCalculation(){return (length*breadth);}
    void displayarea(int temp)
    {
        cout<<"Area: "<<temp;
    }

};
int main()
{
    area a1,a2;
    int temp;
    a1.GetLength();
    temp=a1.areaCalculation();
    a1.displayarea(temp);
    cout<<endl<<"Default area when value is not taken from user"<<endl;
    temp=a2.areaCalculation();
    a2.displayarea(temp);
    return 0;

}
