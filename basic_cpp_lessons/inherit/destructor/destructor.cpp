
#include<iostream>
#include"Person.h"
using namespace std;
int main() {

    Person person(1, "Russo");
    std:: cout << person.set_id(100)->set_name("Avraam Russo")->get_name() << std::endl;
    return 0;
}