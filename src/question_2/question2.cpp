#include "question2.h"
#include <string>

using std::string;
using std::to_string;

bool test_config()
{
    return true;
}

string get_fib_sequence(int length) {
    int num1 = 1;
    int num2 = 0;
    int counter = 1;
    int last_added_num = 1;
    string result = "0 1";

    if (length == 0) {
        result = "0";
    }
    
    while (counter < length) {

        last_added_num = num1 + num2;
        result.push_back(' ');
        result.append(to_string(num1 + num2));

        num2 = num1;
        num1 = last_added_num;

        counter++;
    }
    
    return result;
}