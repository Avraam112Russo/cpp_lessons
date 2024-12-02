#include<iostream>
using namespace std;

class Product {
private:
    string name;
    int price;
public:
    Product(string name, int price) {
        this->price=price;
        this->name=name;
    }
    string getName() {
        return this->name;
    }

    int getPrice() {
        return this->price;
    }
};
class Laptop:public Product{
private:
    float diagonal;
public:
    Laptop(string name, int price, float diagonal):Product(name, price) {
        this->diagonal=diagonal;
    }
    float getDiagonal() {
        return this->diagonal;
    }
};

int main() {
    Laptop laptop("HUAWEI", 13000, 15.6);
    string message;
    string message2;
    cin>>message>>message2;
    cout<<"Your message: "<<message;
    cout<<laptop.getName()<<".."<<laptop.getPrice()<<".."<<laptop.getDiagonal()<<endl;

    clog<<"C++ log..."<<endl;
    cerr<<"Some error occurred"<<endl;
    return 0;
}