#include<iostream>


class Prod {
public:
    Prod() {

    };

    // without virtual will lick memory and deleted only base class
    virtual ~Prod() {
        std::cout << "Prod destructor work" << std::endl;
    }


};
class Mobile: public Prod {
public:
    Mobile() {

    }

    // without virtual and override will lick memory and deleted only base class
    ~Mobile() override {
        std::cout << "Mobile destructor work..." << std::endl;;
    }
};
class Iphone: public Mobile {
public:
    Iphone() {

    }
    ~Iphone() override {
        std::cout << "Iphone destructor work...";
    }
};
int main() {


    // without virtual and override destructor will lick memory and deleted only base class
    Prod * p = new Mobile;
    delete p;




    return 0;
}