#include "Product.h"
Product::Product(int id, std::string name) {
    this -> id = id;
    this -> name = name;
}

int Product::get_id() {
    return this -> id;
}
std::string Product::get_name() {
    return this -> name;
}
int Product::func() {
    return 5 + 5;
}