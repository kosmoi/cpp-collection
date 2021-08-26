# include <iostream>
using namespace std;

int main() {
    bool loop = true;
    char loopend;

    float a, b;


    while (loop == true) {
       	cout << "Type 2 numbers and you will get the resume of a/b\n";
       	cin >> a;
       	cin >> b;
       	cout << a / b;
       	cout << "\n";

        cout << "press 'y + ENTER' to repeat or 'another key + ENTER' to terminate this program:\n";
        cin >> loopend;
        if (loopend == 'y' || loopend == 'Y') {loop = true;} else {loop = false;}
    }

    return 0;
}
