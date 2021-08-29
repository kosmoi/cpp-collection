# include <iostream>
# include <iomanip>
using namespace std;

string Name1, Name2, Name3, Name4, Date1, Date2, Date3, Date4, dontclosewin;

int main() {
    cout << "Name1: "; cin >> Name1;
    cout << "Birthday: "; cin >> Date1; cout << "\n";

    cout << "Name2: "; cin >> Name2;
    cout << "Birthday: "; cin >> Date2; cout << "\n";

    cout << "Name3: "; cin >> Name3;
    cout << "Birthday: "; cin >> Date3; cout << "\n";

    cout << "Name4: "; cin >> Name4;
    cout << "Birthday: "; cin >> Date4; cout << "\n";


    cout << setw(18) << "Name" << setw(15) << "Birthday" << endl;
    cout << setw(3) << "1." << setw(15) << Name1 << setw(15) << Date1 << endl;
    cout << setw(3) << "2." << setw(15) << Name2 << setw(15) << Date2 << endl;
    cout << setw(3) << "3." << setw(15) << Name3 << setw(15) << Date3 << endl;
    cout << setw(3) << "4." << setw(15) << Name4 << setw(15) << Date4 << endl;

    cout << "press any key and ENTER to terminate the programm: "; cin >> dontclosewin;
    return 0;
}
