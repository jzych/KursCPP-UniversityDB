#include <iostream>
#include "DataBase.hpp"

using namespace std;

int main() {
    cout << "Hello fellow Students!" << endl;

    DataBase* db = new DataBase();
    db->addStudentAuto("Jakub", "Zych", 171648);
    db->addStudentMenu();
    db->show();
    
    return 0;
}
