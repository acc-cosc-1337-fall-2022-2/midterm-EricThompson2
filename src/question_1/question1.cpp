#include "question1.h"

bool test_config()
{
    return true;
}

int get_earned_points(int sold) {
    int output;

    if (sold <= 5) {
        output = sold;

    } else if (sold <= 10) {
        output = (sold * 5);

    } else if (sold <= 15) {
        output = (sold * 10);

    } else {
        output = (sold * 15);

    }

    return output;
}