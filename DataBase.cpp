#include "DataBase.hpp"
#include <vector>

DataBase::DataBase()
{
    std::vector<Student*> dataBase;
}

DataBase::~DataBase()
{
    dataBase.clear();
}
