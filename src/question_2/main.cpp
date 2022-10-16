#include <iostream>
#include "question2.h"
#include <string>

using std::string;
using std::cout;
using std::cin;

int main()
{
    int fib_length;
    string fib_sequence;
    bool do_loop;

    do{

    cout << "Enter what length of Fibonacci sequence you want: ";
    cin >> fib_length;
    
    while(!(fib_length >= 1 && fib_length <= 15)){

        cout << "Invalled number" << "\n";
        cout << "Enter what length of Fibonacci sequence you want: ";
        cin >> fib_length;
    }
    
    fib_sequence = get_fib_sequence(fib_length);

    cout << "The Fibonacci sequence of " << fib_length << " is " << fib_sequence << "\n";

    cout << "Please type 1 to check again or 0 to quit the program: ";
    cin >> do_loop;

    } while (do_loop);

    return 0;
}
