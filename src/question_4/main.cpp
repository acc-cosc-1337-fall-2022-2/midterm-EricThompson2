#include "question4.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    double gpa;
    string letter_grade;
    bool do_loop;

    do {

        cout << "Enter a gpa between 0 and 4: ";
        cin >> gpa;

        while (!(gpa >= 0 && gpa <= 4)) {
            cout << "Invald number" << "\n";
            cout << "Enter a grade between 0 and 4: ";
            cin >> gpa;
        }

        letter_grade = gpa_to_letter_grade(gpa);

        cout << "The letter grade of a " <<  gpa << " gpa is " << letter_grade << "\n";
        
        cout << "Please type 1 to check again or 0 to quit the program: ";
        cin >> do_loop;

    } while (do_loop);

    return 0;
}