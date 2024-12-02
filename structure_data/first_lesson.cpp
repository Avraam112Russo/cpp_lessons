#include <iostream>

class Employee {
private:
    std::string name;
public:
    explicit Employee( const std::string&  name) : name(name) {}
    std::string get_name() {
        return this->name;
    }
    void set_name(std::string name) {
        this->name=name;
    }
};
int main() {
    std::cout << "WORK" << std::endl;
    Employee employee("RUSSO");
    Employee employee2("ELENA");
    Employee employee3("DASHA");
    int n = 3;
    Employee * arr [n] = {&employee,&employee2,&employee3};
    /*
    std::cout << "Before \n";
    for (auto element:arr) {
        std::cout << element->get_name() << "\n";
    }
    for (auto element:arr) {
        if (element->get_name() == "RUSSO") element->set_name("UPDATE");
    }
    std::cout << "After \n";
    for (auto element:arr) {
        std::cout << element->get_name() << "\n";
    }
    */
    std::cout << "Address: " << arr << "\n";
    std::cout << "Value: " << arr[0]->get_name() << "\n";

    return 0;
}