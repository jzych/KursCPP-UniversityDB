#include <string>

struct Student
{
    std::string first_name;
    std::string last_name;
    int32_t student_id;

    Student (const string & fn = "firstname",
             const string & ln = "lastname", 
             const int32_t = 000000);
};
