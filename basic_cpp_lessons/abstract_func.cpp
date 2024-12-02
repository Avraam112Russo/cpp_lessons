
#include <iostream>
using namespace std;

class Product {

protected:
    int id;
    double price;
    Product()=default;
    Product(int id, double  price) {
        this->id=id;
        this->price=price;
    }
public:
    virtual ~Product()=default;

    // all virtual function should be override in child class, else it becomes same abstract class
    virtual void show_info() = 0; // = 0 -> this syntax make abstract function and abstract class
    virtual void show_info2() = 0; // = 0 -> this syntax make abstract function and abstract class
};
class Laptopp:public Product {
public:
    Laptopp(int id, double price): Product(id, price) {

    }
    void show_info() override {
        std::cout << "Override func in Laptopp" << endl;

        this->id=100;
        std::cout << this->id<<endl;
    }
    void show_info2() override {
        std::cout << "Override func in Laptopp" << endl;

        this->id=100;
        std::cout << this->id<<endl;
    }
};
int main() {
    // Laptopp laptopp;
    // laptopp.show_info();

    Product * product_laptop = new Laptopp(100, 5.7);
    std::cout << typeid(*product_laptop).name()<<endl; // name varibale
    product_laptop->show_info();
    delete product_laptop;

    return 0;
}