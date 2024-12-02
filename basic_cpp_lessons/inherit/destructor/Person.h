//
// Created by avraa on 25.11.2024.
//

#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person {
private:
    int id;
    std::string name;
public:
    Person()=default;
    Person(int id, std::string name);
    ~Person();
    int get_id();
    std::string get_name();
    Person* set_id(int id);
    Person* set_name(std::string name);
};
#endif //PERSON_H
