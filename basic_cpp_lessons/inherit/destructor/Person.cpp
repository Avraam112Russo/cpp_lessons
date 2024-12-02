#include"Person.h"
#include<iostream>
Person::Person(int id, std::string name) {
    this->id=id;
    this->name=name;
}
Person::~Person() {
    std::cout << "Destructor person is work.." << std::endl;
}
int Person::get_id() {
    return this -> id;
}
std::string Person::get_name() {
    return this -> name;
}
Person* Person::set_id(int id) {
    this->id=id;
    return this;
}
Person *Person::set_name(std::string name) {
    this->name=name;
    return this;
}





