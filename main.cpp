#include <iostream>
#include "DataBase.hpp"

using namespace std;

void menuShow() {
    cout << endl << "Program option:" << endl;
    cout << "1. Show students list" << endl;
    cout << "2. Add new student" << endl;
    cout << "3. Remove student" << endl;
    cout << "4. Sort students list" << endl;
    cout << "5. Exit program" << endl;
}

int main() {
    int32_t index;
    char option;
    DataBase* db = new DataBase();

    // Populate database with dummy items
    db->addStudentAuto("Jakub", "Zych", 171648);
    db->addStudentAuto("Jan", "Kowalski", 170032);
    db->addStudentAuto("Janina", "Nowak", 178291);
    db->addStudentAuto("Janko", "Muzykant", 17111);

    do {   
        menuShow();
        cin >> option;

        // Clear terminal
        cout << "\033[2J\033[1;1H";

        switch (option) {
            case '1' :
                cout << "Showing students list" << endl;
                db->show(); 
                break;
            case '2' : 
                cout << "Adding new student" << endl;
                db->addStudentMenu();
                break;
            case '3' : 
                cout << "Removing student" << endl << "Enter index number: ";
                cin >> index;
                db->removeStudent(index);
                break;
            case '4' : 
                cout << "Sorting student list" << endl;
                db->sortByIndex(); 
                db->show();
                break;
            case '5' : 
                cout << "Exit" << endl;
                break;
            default : 
                cout << "Unknown option " << option << "!" << endl;
                break;
        }
    } while (option != '5');
    
    return 0;
}
