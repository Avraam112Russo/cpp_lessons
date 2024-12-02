#include <iostream>

using namespace std;
class Employee {
private:
    int id;
    double rating;
public:
    Employee() {
        std::cout << "Basic employee constructor..." << std::endl;
    }
    Employee(int id, double rating) {
        std::cout << "Basic employee constructor with args..." << std::endl;
        this->id=id;
        this->rating=rating;
    }
    // Employee(const Employee& employee) {
    //     std::cout << "Basic employee copy constructor from already exist Employee..." << std::endl;
    // }
    ~Employee() {
        std::cout << "Destructor Employee start..." << endl;
    }
    int get_id() {
        return this->id;
    }
    double get_rating() {
        return this->rating;
    }
};
class It_employee:public Employee{
public:
    It_employee() {
        std::cout << "It_employee constructor..." << std::endl;
    }
    It_employee(int id, double rating): Employee(id, rating) {
        std::cout << "It_employee constructor with args..." << std::endl;

    }
    It_employee(const It_employee& it_employee) : Employee(it_employee) {
        std::cout << "It_employee constructor with Employee(it_employee) ..." << std::endl;
    }

    ~It_employee() {
        std::cout << "Destructor It_employee start..." << endl;
    }

};




/* when we create object Java_It_Employee without args
Basic employee constructor...
It_employee constructor...
Java_It_Employee constructor...
 */
/* when we create object Java_It_Employee without args with args
Basic employee constructor with args...
It_employee constructor with args...
Java_It_Employee constructor with args...

*/
class Java_It_Employee: public It_employee {
    // using It_employee::It_employee;
public:
    Java_It_Employee() {
        std::cout << "Java_It_Employee constructor..." << std::endl;
    }
    Java_It_Employee(int id, double rating): It_employee(id, rating) {
        std::cout << "Java_It_Employee constructor with args..." << std::endl;
    }
    Java_It_Employee(const Java_It_Employee& java_it_employee) : It_employee(java_it_employee) {
        std::cout << "Java_It_Employee constructor with It_employee(java_it_employee)..." << std::endl;
    }


    ~Java_It_Employee() {
        std::cout << "Destructor Java_It_Employee start..." << endl;
    }
};
int main() {

    cout <<"========================" <<endl;
    Employee employee(1003, 3.7);
    Employee employee2(employee); // copy object
    cout << "Employee ->" << employee.get_id() << endl;;
    cout << "Employee ->" << employee.get_rating() << endl;
    cout <<"========================" <<endl;
    cout << "Employee 2 ->" << employee.get_id() << endl;;
    cout << "Employee 2 ->" << employee.get_rating() << endl;
    cout <<"========================" <<endl;
    It_employee it_employee(666, 4.4); // It_employee(int id, double rating): Employee(id, rating) {...}
    It_employee it_employee2(it_employee); //  It_employee(const It_employee& it_employee) : Employee(it_employee) {...}
    cout <<"========================" <<endl;
    Java_It_Employee java_it_employee(333, 0.9); // Java_It_Employee(int id, double rating): It_employee(id, rating){}
    Java_It_Employee java_it_employee2(java_it_employee); // Java_It_Employee(const Java_It_Employee& java_it_employee) : It_employee(java_it_employee) {}

    return 0;
}