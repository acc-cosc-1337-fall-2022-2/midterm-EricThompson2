#include "question3.h"
#include <string>

using std::string;

bool test_config()
{
    return true;
}

string transcribe_dna_to_rna(string dna) {
    string rna = "";
    int dna_length = dna.length();
    int count = 0;
    char dna_slice;

    while (count < dna_length) {

        dna_slice = dna.at(count);

        if (dna_slice == 'T' ||dna_slice == 'T' ) {
            rna.push_back('U');
        } else {
           rna.push_back(dna_slice);
        }

        count++;
    }
    return(rna);

}


