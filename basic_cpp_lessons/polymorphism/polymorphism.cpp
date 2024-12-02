#include <iostream>


/*
class Car {
    friend void show_car(Car& car);
public:
    virtual ~Car() = default; // IMPORTANT! we need virtual destructor for delete all hierarchy inherit
    // else, without virtual destructor we delete only base class, children element will lick

    std::string name;
    virtual void some_func() {
        std::cout << "Car some_func..." << std::endl;
    }
};


class Bmw: public Car {
public:
    void some_func() override {
        std::cout << "Bmw some_func..." << std::endl;
    }
};

class Bmw5Series: public Bmw {
public:
    void some_func() override {
        std::cout << "Bmw5series some_func..." << std::endl;
    }
};



void show_car(Car &car) {
    std::cout << "Your auto is: " << car.name << std::endl;
}

*/




class My_Employee {
public:
    My_Employee() {
        std::cout << "My employee created..." << std::endl;
    }
    virtual ~My_Employee() {
        std::cout << "My employee destroyed..." << std::endl;
    }
    virtual void my_func() const {
        std::cout << "My func in My_Employee..." << std::endl;
    }
};
class SecureStaff:public My_Employee {
public:
    SecureStaff() {
        std::cout << "SecureStaff created..." << std::endl;
    }
     ~SecureStaff() override {
        std::cout << "SecureStaff destroyed..." << std::endl;
    }
    void my_func() const override {
        std::cout << "my func in security staff..." << std::endl;
    }
    void simple_func() {
        std::cout << "just simple func in security staff..." << std::endl;    }
};
int main() {

    My_Employee * sec_staff_ptr = nullptr;
    sec_staff_ptr = new SecureStaff;
    sec_staff_ptr->my_func();
   auto secure_staff_ptr_cast = dynamic_cast<SecureStaff *>(sec_staff_ptr);
    if (secure_staff_ptr_cast != nullptr) {
        secure_staff_ptr_cast->simple_func();
    } else {
        std::cout << "Something went wrong" << std::endl;
    }
    delete secure_staff_ptr_cast;
    delete sec_staff_ptr;


    /*
    My_Employee * employee = nullptr;
    employee = new SecureStaff;
    auto secure_staff_ptr = dynamic_cast<SecureStaff*>(employee);
    if (secure_staff_ptr != nullptr) {
        std::cout << "Cast successfull" << std::endl;
    } else {
        std::cout << "Something went wrong" << std::endl;

    }
    delete employee;
    */






    /*

    Bmw bmw;
    bmw.name="Bmw 530i";
    show_car(bmw);

    std::cout << "==========================" << std::endl;

    Car* car = nullptr;
    car = new Bmw;
    delete car;

    std::cout << "==========================" << std::endl;

    Car* car1 = nullptr;
    car1 = new Car;
    car1->some_func();
    delete car1;

    Car* bmw1 = nullptr;
    bmw1 = new Bmw;
    bmw1->some_func();
    delete bmw1;
    */







    /*
    output: Car some_func...
            Car some_func...
            because we have static binding in this case
    */


    /*

    std::cout << "<---------==========================-------->" << std::endl;

    // usage keyword virtual and override we can get dynamic binding
    Car base_car;
    Car * ptr_base_car = &base_car;
    ptr_base_car->some_func(); // Car some_func...
    Bmw some_bmw;
    ptr_base_car = &some_bmw;
    ptr_base_car->some_func();// Bmw some_func...


    std::cout << "<---------==========================-------->" << std::endl;
    std::cout << "<---------==========================--------> last" << std::endl;
    Car* basecar = nullptr;
    basecar = new Car;
    Car* bmwcar = nullptr;
    bmwcar = new Bmw;
    Car* bmw5series=nullptr;
    bmw5series = new Bmw5Series;
    Car* car_array [] = {basecar, bmwcar, bmw5series};
    for (auto car : car_array) {
        car->some_func();
    }

    delete basecar;
    delete bmwcar;
    delete bmw5series;

    std::cout << "<---------==========================-------->" << std::endl;
    std::cout << "<---------==========================--------> last last" << std::endl;

    // not valid
    Car car_13;
    Bmw bmw_13;
    Bmw5Series bmw5_series_13;
    Car arr_cars[] = {car_13, bmw_13, bmw5_series_13}; // all objects slices to base class -> Car
    for (auto c: arr_cars) {
        c.some_func(); // not valid
    }
    std::cout << "<---------==========================-------->" << std::endl;
    std::cout << "<---------==========================-------->  Car * cars_ptr []" << std::endl;


    // valid
    Car car_14;
    Bmw bmw_14;
    Bmw5Series bmw5_series_14;
    Car * cars_ptr [] = {&car_14, &bmw_14, &bmw5_series_14}; // valid
    for (auto c : cars_ptr) {
        c->some_func(); // valid output
    }

    Car car77;
    Car * ptrr_car = &car77;
    int i = 10;
    int * ptr_i = &i;
    double dd = 13.5;
    double * d_ptr = &dd;
    std::cout << sizeof(ptrr_car) << std::endl;
    std::cout << sizeof(d_ptr) << std::endl;
    std::cout << sizeof(ptr_i) << std::endl;

    */


    // error compile
    /* Car & cars_pt333r [] = {car_14, bmw_14, bmw5_series_14}; */
    /* Car & cars_pt333r [] = {car_14, bmw_14, bmw5_series_14}; */

    /*
    There shall be no references to references, no arrays of references, and no pointers to references.
    That's because references are not objects and don't occupy the memory so don't have an address.
    You can think of them as the aliases to the objects.
    Declaring an array of nothing has not much sense.
    */



}