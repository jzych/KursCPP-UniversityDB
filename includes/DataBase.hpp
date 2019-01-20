#include <vector>
#include <iostream>
#include "Student.hpp"

class DataBase
{
    std::vector<Student> dataBase;
public:
    DataBase();
    ~DataBase();
    
    void addStudentMenu();
    void addStudentAuto(std::string firstName, std::string lastName, int32_t index_no);
    void show();
    void removeStudent(const int32_t & index);
    void sortByIndex();
    friend bool lowerThan(const Student & s1, const Student & s2);

};
