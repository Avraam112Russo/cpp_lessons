#include<iostream>

#include "product.h"

/*
class  Employee {
private:
    int id;
    double salary;
public:
    Employee()=default;
    int get_id() {
        return this->id;
    }
    double get_salary() {
        return this -> salary;
    }
    Employee* set_id(int id) {
        this -> id  = id;
        return this;
    }
    Employee* set_salary(double salary) {
        this -> salary = salary;
        return this;
    }
};
class It_employee: public Employee {};
*/


/*
class D_product {
private:
    int id;
protected:
    int price;
public:
    double rating;

    D_product(int id, int price, double rating) {
        this->id=id;
        this->price=price;
        this->rating=rating;
    }
    int get_id() {
        return this->id;
    }
};

// ressurect
class Laptops:private D_product {
public:
    void func() {
        // id=100;
        price=500;
        rating=5.0;
    }
protected:
    using D_product::get_id; //"using" get id even from private inheritance

};
class Huawei: public Laptops {
    void func() {
        get_id();
    }
};
*/


int main() {
    /*
    It_employee employee;
    employee.set_id(100)->set_salary(12465);
    std::cout << "Id: " << employee.get_id() << ". salary: " << employee.get_salary() << std::endl;
    */


    return 0;
}