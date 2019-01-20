#include <vector>
#include <iostream>
#include "Student.hpp"

class DataBase
{
    std::vector<Student> dataBase;
public:
    DataBase();
    ~DataBase();
    
    void show();
    void addStudentMenu();
    void addStudentAuto(std::string firstName, std::string lastName, int32_t index_no);
};
