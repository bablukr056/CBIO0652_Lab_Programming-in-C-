#include <iostream>

using namespace std;

class peptide{
   public:
        string seq;
    int seq_length;
    peptide()
    {
        seq="FRWTYALAFPLV";
        seq_length=12;
    }
    void showpep()
    {
cout<<"Entered peptide Sequence name : "<<seq<<endl<<"Entered peptide sequence length : "<<seq_length<<endl;
    }
    ~peptide()
    {
        cout<<"Peptide sequence shown above details."<<endl;
    }
};
int main()
{
peptide p;
p.showpep();
    return 0;
}
