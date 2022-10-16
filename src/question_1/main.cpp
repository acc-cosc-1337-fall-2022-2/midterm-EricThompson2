#include <iostream>
#include "question1.h"
using std::cout;
using std::cin;

int main()
{
    int widgets_sold;
    int points;
    bool do_loop;

    do{

    cout << "Enter how many widgets you sold: ";
    cin >> widgets_sold;
    
    while(widgets_sold <= 0){

        cout << "Invalled number" << "\n";
        cout << "Enter how many widgets you sold: ";
        cin >> widgets_sold;
    }
    
    points = get_earned_points(widgets_sold);

    cout << "Points Earned " << points << "\n";

    cout << "Please type 1 to check again or 0 to quit the program: ";
    cin >> do_loop;

    } while (do_loop);

    return 0;
}