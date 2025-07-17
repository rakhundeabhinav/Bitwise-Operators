//Abhinav Rakhunde
//PRN:24070123001

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "\n Bitwise Operations" << endl;
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "a << 1 = " << (a << 1) << endl;
    cout << "b >> 1 = " << (b >> 1) << endl;

    return 0;
}

/*OUTPUT:
 Bitwise Operations
a & b = 0
a | b = 1
a ^ b = 1
~a = -2
a << 1 = 2
b >> 1 = 0
*/
