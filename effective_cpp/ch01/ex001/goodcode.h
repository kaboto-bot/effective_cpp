#pragma once
#include <string>

class Person
{
public:
    Person(){};
    std::string Talk() {
        std::string ret = mName + ": Good Hello";
        return ret;
    }

private:
    std::string mName;
};
