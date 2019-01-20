#include "DataBase.hpp"
#include <vector>
#include <iomanip>
#include <algorithm>
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

void DataBase::show() {
    for (auto & student : dataBase) {
        std::cout << std::setw(10) << std::left << student.firstName;
        std::cout << std::setw(15) << std::left << student.lastName;
        std::cout << std::setw(6) << std::left << student.studentId;
        std::cout << std::endl;
    }
}

void DataBase::removeStudent(const int32_t & index) {
    if (dataBase.empty()) {
        std::cout << "Empty database! " << std::endl;
        return;
    }
    for (unsigned int i = 0; i < dataBase.size(); i++) {
        if (index == dataBase[i].studentId) {
            dataBase.erase(dataBase.begin()+ i);
            return;
        }
    }
}

bool lowerThan(const Student & s1, const Student & s2) {
    if (s1.studentId < s2.studentId)
        return true;
    else
        return false;
 }

void DataBase::sortByIndex() {
    std::sort(dataBase.begin(), dataBase.end(), lowerThan);
}

