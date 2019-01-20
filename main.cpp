#include <iostream>
#include "DataBase.hpp"

using namespace std;

int main() {
    int32_t index;
    cout << "Hello fellow Students!" << endl;

    DataBase* db = new DataBase();
    db->addStudentAuto("Jakub", "Zych", 171648);
    db->addStudentMenu();
    db->show();
    cout << "Enter index number: ";
    cin >> index;
    db->removeStudent(index);
    db->show();    
    return 0;
}
