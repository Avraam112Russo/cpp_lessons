#include<iostream>
using namespace std;

/*
void incr(int age);
void incr2(int* age);
int main() {
    int age = 24;
    std::cout << "Var age before incr: " << age << endl;
    incr(age); // var don't change value beacuse we work with copy
    std::cout << "Var age after incr: " << age << endl;
    std::cout << "=================" << endl;
    std::cout << "Var age before incr2: " << age << endl;
    incr2(&age); // var change value because we work with original
    std::cout << "Var age after incr2: " << age << endl;
    return 0;
}
void incr(int age) {
    ++age;
    std::cout << "Var age in incr() -> " << age << endl;
}
void incr2(int *age) {
    ++(*age);
    std::cout << "Var age in incr2() -> " << *age << endl;
}
*/

/*
void increment(int& i);
int main() {
    int i = 10;
    cout << "Before: " << i << endl;
    increment(i);
    cout << "After: " << i << endl;
    return 0;
}
void increment(int &i) {
    ++i;
}
*/

/*
void increment(const int* cptr, const int& cref, int* ptr, int& ref);
int main() {

    int i = 100;
    int b = 200;
    int c = 300;
    int d = 400;

    int* ptr_i = &i;
    int* ptr_c = &c;
    increment(ptr_i, b, ptr_c, d);
    cout << "=======================" << endl;
    cout << "=======================" << endl;
    cout << "=======================" << endl;

    // change value because we work with original vars
    cout << "*ptr_c value: " << *ptr_c << endl;
    cout << "&d value: " << d << endl;
    return 0;
}
void increment(const int *cptr, const int &cref, int *ptr, int &ref) {
    cout << "Value cptr*: " << *cptr << endl;
    cout << "Address cptr*: " << cptr << endl;
    cout << "===================" << endl;
    cout << "Value cref&: " << cref << endl;
    cout << "Address cref&: " << &cref << endl;
    cout << "===================" << endl;
    cout << "Value ptr*: " << *ptr << endl;
    cout << "Address ptr*: " << ptr << endl;
    cout << "===================" << endl;
    cout << "Value &ref: " << ref << endl;
    cout << "Address &ref: " << &ref << endl;
    *ptr = 666;
    ref = 777;
}
*/


/*
void testest(const int* input, const int* input2, int& ref) {
    cout << "Read-only *input: " << *input << endl;
    cout << "Read-only *input2: " << *input2 << endl;
    ++ref; cout << "Change value &ref: " << ref << endl;
}
int main() {
    int i = 100;
    int b = 200;
    int c = 300;
    cout << "Value c before func: " << c << endl;
    testest(&i, &b, c);
    cout << "Value c after func: " << c << endl;
    return 0;
}
*/

/*
std::string test() {
    string s = "Hello, ";
    string s2 = "world";

    std::string result = s + s2;
    cout << "Result string IN func address: " << &result << endl;
    return result;
}
int test2() {
    int i = 100;
    int b = 100;
    int result = i + b;
    cout << "Result int IN func address: " << &result << endl;
    return result;
}
int main() {
    std::string result = test();
    int result2 = test2();
    cout << "Result string OUT func address: " << &result << endl; // string have same address in func and out func
    cout << "Result int OUT func address: " << &result2 << endl; // int have different address

}

 */
int main() {


    return 0;
}