#include <iostream>

using namespace std;

class bk
{
protected:
    int a,b;
public:
    bk()
    {
    a=100,b=20;
}};
class pu
{
protected:
    int c, d;
public:
    pu()
    {
    c=500;
    d=100;

}};
class physics: public bk,public pu
{
public:
    void show()
    {
        cout<<"The stored value of A in BK:"<<bk::a<<endl;
        cout<<"The stored value of B in BK:"<<bk::b<<endl;
        cout<<"The stored value of C in PU:"<<pu::c<<endl;
        cout<<"The stored value of D in PU:"<<pu::d<<endl;
    }
};
int main()
{
physics p;
p.show();
    return 0;
}
