#include "question2.h"
#include <string>

using std::string;

bool test_config()
{
    return true;
}

string gpa_to_letter_grade(double grade) {
    string letter_grade;

    if (grade < 1) {
        letter_grade = "F";

    } else if (grade < 2 ) {
        letter_grade = "D";

    } else if (grade < 3 ) {
        letter_grade = "C";

    } else if (grade < 3.5 ) {
        letter_grade = "B";

    } else {
        letter_grade = "A";
    }

    return letter_grade;
}