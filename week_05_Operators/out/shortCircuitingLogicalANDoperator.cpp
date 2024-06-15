#include <iostream>
using namespace std;

bool is_positive(int number) {

    if (number > 0)
        return true;
    else 
        return false;
}


bool is_even(int number) {
    if (number % 2 == 0)
        return true;
    else 
        return false;
}


int main() {
    
    int x = 10;

    if (is_positive(x) && is_even(x)) {
        cout << "Both conditions are satisfied." << endl;
    } else {
        cout << "Conditions not satisfied." << endl;
    }

    int y = -5;

    if (is_positive(y) && is_even(y)) {
        cout << "Both conditions are satisfied." << endl;
    } else {
        cout << "Conditions not satisfied." << endl;
    }
    
    return (0);
}