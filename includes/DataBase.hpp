#include <vector>
#include <iostream>
#include "Student.hpp"

class DataBase
{
    std::vector<Student> dataBase;
public:
    DataBase();
    ~DataBase();

    void addStudent();
};
