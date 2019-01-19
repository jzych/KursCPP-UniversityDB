#include "DataBase.hpp"
#include "Student.hpp"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

DataBase::DataBase()
{
    std::vector<Student> dataBase;
}

void DataBase::inputData()
{
    string firstName;
    string lastName;
    int32_t studentID;
    cout << "Enter student first name: ";
    cin >> firstName;
    cout << "Enter student last name:  ";
    cin >> lastName;
    cout << "Enter student ID no: ";
    cin >> studentID;

    addStudent(firstName, lastName, studentID);
}

void DataBase::addStudent(string & fn, string & ln, int32_t & in)
{
    student = new Student(fn, ln, in);
    dataBase.push_back(student);
}
