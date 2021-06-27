#include <iostream>

using namespace std;
void show(int x,int y)
{

    cout<<"Entered value of X: "<<x<<endl;
    cout<<"Entered value of Y: "<<y<<endl;
}
void show(int z)
{
    cout<<"Entered value of Z: "<<z<<endl;
}
void show(int d,int e,int f)
{
    cout<<"Entered value of D: "<<d<<endl;
     cout<<"Entered value of E: "<<e<<endl;
      cout<<"Entered value of F: "<<f<<endl;
}
int main()
{
int x=12,y=20,z=30,d=91,e=18,f=16;
show(x,y);
show(z);
show(d,e,f);
    return 0;
}
