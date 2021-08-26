# include <iostream>
using namespace std;

int main() {
    bool loop = true;
    float x, y;
    char loopend;



    while (loop == true) {
        cout << "Hello world!\n";
        cout << "Type 2 numbers and u will get the sum\n";
        cin >> x;
        cin >> y;
        cout << x + y;
        cout << "\npress y and enter to repeat or another key to terminate this program:\n";
        cin >> loopend;
        if (loopend == 'y' || loopend == 'Y') {
            loop = true;
        } else {
            loop = false;
        }
    }

    return 0;
}
