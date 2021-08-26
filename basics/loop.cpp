# include <iostream>
using namespace std;

int main() {
    bool loop = true;
    char loopend;

    // declare here all variables
    // -------


    while (loop == true) {
       	// Here the cotent
        // -------

        cout << "press 'y + ENTER' to repeat or 'another key + ENTER' to terminate this program:\n";
        cin >> loopend;
        if (loopend == 'y' || loopend == 'Y') {loop = true;} else {loop = false;}
    }

    return 0;
}
