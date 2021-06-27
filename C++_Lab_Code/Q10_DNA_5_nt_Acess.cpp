#include <iostream>

using namespace std;

int main()
{
    int dnal;
    string dna;
    cout <<"Provide DNA Sequence: ";
    cin>>dna;
    dnal=dna.length();
    cout<<"Length of entered DNA Sequence : "<<dnal;
    cout<<"\n";
    cout<<"First 5 nt composition in given DNA sequence : "<<dna.substr(0,5);

    return 0;
}
