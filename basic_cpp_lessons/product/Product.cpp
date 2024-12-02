#include "Product.h"
#include <iostream>
Product::Product(int id, std::string name) {
    this -> id = id;
    this -> name = name;
}
Product* Product::set_id(int id) {
    this->id=id;
    return this;
}
void Product::set_name(std::string name) {
    this->name=name;
}

int Product::get_id() {
    return this -> id;
}
std::string Product::get_name() {
    return this -> name;
}
void Product::to_string() {
    std::cout << "Product [ id: " << this -> id << ", name: " << this->name << " ]" << std::endl;
}



