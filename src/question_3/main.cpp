#include <string>
#include <iostream>
#include "question3.h"

using std::string;
using std::cout;
using std::cin;

int main()
{
    string dna;
    string rna;
    
    cout << "Enter a dna string: ";
    cin >> dna;

    rna = transcribe_dna_to_rna(dna);
    cout << "The rna string of " << dna << " is " << rna << "\n";

    return 0;
}