#include <iostream>

using namespace std;

class DNA{
public:
    DNA()
    {
        cout<<"Here is DNA sequence : ATCTCGTACGTACGACTGC"<<endl;
    }

};
class RNA: public DNA{
public:
    RNA()
    {
        cout<<"Here is RNA sequence : AUCACGUCUCGUCGUAGUC"<<endl;
    }
};
int main()
{
    RNA r;
    return 0;
}
