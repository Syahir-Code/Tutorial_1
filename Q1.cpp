#include <iostream>
using namespace std;

int opt;
int main () {
do { 
    int x1, x2, result;
    int add, sub, mul, rem;
    float div;

    cout << "\n\nSimple calculator\n" << "Enter option\n" << "1)+\n"
    << "2)-\n" << "3)*\n" << "4)/\n" <<  "5) mod(x1,x2)\n" 
    << "-1) Exit" << endl;

    cout << "\nYour selection -> ";
    cin >> opt;
    
    cout << "Enter first number: ";
    cin >> x1;
    cout << "Enter second number: ";
    cin >> x2;
    cout << endl;

    if (opt == 1) {
        result = x1+x2;
        cout << x1 << " + " << x2 << " = " << result;
    }

    else {
        break;
    }
} while (true);
    return 0;
}