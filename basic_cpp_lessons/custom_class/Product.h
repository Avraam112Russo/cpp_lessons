//
// Created by avraa on 23.11.2024.
//
#ifndef PRODUCT_H
#define PRODUCT_H
#include<iostream>
#include<string>
#include "constants.h"
class Product {
private:
    int id;
    std::string name;
public:
    Product(int id, std::string name);
    int get_id();
    std::string get_name();
    int func();
};
#endif
