#include <iostream>
using namespace std;




// interface is a class without any variable, it has only virtual function
class Interface_example {
public:
    virtual void some_func_interface(const string_view& s) = 0;
    virtual void some_func_interface_2() = 0;
    virtual ~Interface_example()=default;
};
class Child_implement_interface:public Interface_example {
public:
    void some_func_interface(const string_view& s) override {
        std::cout<< s << endl;
    }
    void some_func_interface_2() override {
        std::cout << "some_func_interface_2 work..." << endl;
    }

};

// just write one more kind of constructor, not interface theme
class Mobile {
private:
    int id;
public:
    Mobile(int value) : id(value) {
        std::cout << "Mobile object created..." << endl;
        std::cout << "Id:" << this->id  << endl;

    }
};




int main() {
    Interface_example * example = nullptr;
    example = new Child_implement_interface;
    string_view str = "Hello, world";
    example->some_func_interface(str);
    example->some_func_interface_2();
    delete example;
    Mobile mobile(100);
    return 0;
}

