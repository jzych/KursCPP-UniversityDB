#include "DataBase.hpp"
#include <vector>

DataBase::DataBase() {
    std::vector<Student> dataBase;
}

void DataBase::addStudentMenu() {
    Student newItem;

    std::cout << "Enter student first name: ";
    std::cin >> newItem.firstName;
    std::cout << "Enter student last name: ";
    std::cin >> newItem.lastName;
    std::cout << "Enter student index number: ";
    std::cin >> newItem.studentId;

    dataBase.push_back(newItem);
}

void DataBase::addStudentAuto(std::string firstName, std::string lastName, int32_t index_no) {
    Student newItem;

    newItem.firstName = firstName;
    newItem.lastName = lastName;
    newItem.studentId = index_no;

    dataBase.push_back(newItem);
}
