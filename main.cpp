#include <iostream>

using namespace std;

void menuShow();
void menuChoose();

int main() { 
    menuChoose();

    return 0;
}

void menuShow() {
	system("cls");
	cout << "Program option:" << endl;
	cout << "1. Show students list" << endl;
	cout << "2. Add new student" << endl;
	cout << "3. Remove student" << endl;
	cout << "4. Sort students list" << endl;
	cout << "5. Exit program" << endl;
}

void menuChoose() {
    char option;

    do {
        cout << "\033[2J\033[1;1H";
        menuShow();
        cin >> option;

        switch (option) {
            case '1' :
                           cout << "Showing students list" << endl;
                           break;
            case '2' : 
                           cout << "Adding new student" << endl;
                           break;
            case '3' : 
                           cout << "Removing student" << endl;
                           break;
            case '4' : 
                           cout << "Sorting student list" << endl;
                           break;
            case '5' : 
                           cout << "Finishing program" << endl;
                           return;
            default : 
                          cout << "Unknown option " << option << "!" << endl;
                          break;
        }
    } while (option != 5);
}
