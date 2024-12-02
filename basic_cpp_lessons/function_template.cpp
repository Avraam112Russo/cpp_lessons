#include<iostream>
#include<cstring>

using namespace std;



template<typename T>
T some_func(T arg1, T arg2) {
    return arg1 + arg2;
}


template<typename Y>
void some_func2(Y arg1) {
    cout << arg1 << endl;
}



/*
template <typename T, typename Y> void my_func(T arg1, Y arg2) {
    std::cout << "T: " << arg1 << std::endl;
    std::cout << "Y: " << arg2 << std::endl;
}
template<typename T> T my_func2(T a, T b) {
    return a + b;
}
*/



/*
// function template
template<typename T> T func(T a, T b);

// function specialization
template<> const char* func<const char*>(const char* a, const char* b);

template<> const char* func<const char*>(const char* c, const char* d) {
    return (std::strcmp(c, d) < 0) ? c : d; // c > d = -1; c < d = 1; c == d = 0
}
*/

int main() {

    /*
    auto res = some_func(10, 13);
    auto res2 = some_func(10L, 10L);
    auto res3 = some_func(13.46, 24.57);
    cout << res << endl;
    cout << res2 << endl;
    cout << res3 << endl;
    cout << "====================" << endl;
    some_func2("Hola, my friend!");
    */
    /*
    my_func(5.6, "Hello!");
    auto res = my_func2<int>(10, 20);
    std::cout << res << std::endl;
    std::cout << sizeof(res) << std::endl;
    */


    /*
    const char* c = "abcd";
    const char* b = "abcc"; // this value is greater
    std::cout << func(c, b) << std::endl;
    std::cout << *(func(c, b)) << std::endl; // return pointer to first symbol
    */
    return 0;
}