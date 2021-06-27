#include <iostream>

using namespace std;

 class Classroom{
     public:
string name;
int id;
string course;
string university;
string subject;
void printclass()
{

    cout<<"Enter Name : "<<name;
    cout<<"\n";
    cout<<"Register No: "<<id;
    cout<<"\n";
    cout<<"Course name : "<<course;
    cout<<"\n";
    cout<<"University : "<<university;
    cout<<"\n";
    cout<<"Subject : "<<subject;
}
};
int main()
{

    Classroom b;

    b.name="Bablu Kumar";
    b.id=20310004;
    b.course="M.Tech Computational Biology";
    b.university="Pondicherry University";
    b.subject="C++ Lab Program";
    b.printclass();


    return 0;
}
