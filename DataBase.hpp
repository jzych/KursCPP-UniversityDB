#include <vector>
#include <string>
#include "Student.hpp"

using namespace std;

class DataBase
{
    std::vector<Student> dataBase;
public:
    DataBase();
    ~DataBase();
    void addStudent(string & fn, string & ln, int32_t & in);
    void inputData();
};
