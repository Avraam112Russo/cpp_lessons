#include <iostream>
using namespace std;

int main() {




    /*
    string msg = "Hello, Russo";
    [](string msg) {
        std::cout << msg << endl;
    }(msg);






    auto result = [](int i, int b) {
        return i + b;
    };
    cout << result(10, 13) << endl;






    [](int i, int b) -> int {
        return i + b;
    }(15, 20);

    */








    /*
    auto func = [](double d,double f) -> int {
      return d + f;
    };
    auto result = func(2.4, 3.6);
    std::cout << result << endl;
    */






    /*
    [] {
       std::cout << "Hola" << endl;
    }();
    */







    /*
    auto func {[](std::string s) -> void {std::cout << s << std::endl;}};
    std::string s {"Hello, world"};
    func(s);
    */






    // void do_operation(int a, int b, int (*op)(int, int))
    // {
    //     std::cout << op(a, b) << std::endl;
    // }
    //
    // int main()
    // {
    //     auto sum { [](int a, int b) {return a + b;} };
    //     auto subtract { [](int a, int b) {return a - b;} };
    //
    //     do_operation(10, 4, sum);           // 14
    //     do_operation(10, 4, subtract);     // 6
    // }









    /*
    auto func = [](auto a, auto b) {

        return a + b;
    };
    auto result = func(5.6, 7.3);
    auto result2 = func(5, 7);
    cout << result << endl;
    cout << result2 << endl;
    */







    /*
    int i = 10;
    int b = 15;
    [i, b](const std::string& s) {
      std::cout << s << i + b << endl;;
    }("RESULT: ");
    */








    /*
    int b = 10;
    auto func = [b]() {
      std::cout << "Inner func value: " << b << endl; // the value don't change because we work with copy i
    };
    for (size_t i = 0; i < 5; i++) {
        func();
        std::cout << "Outer func value: " << b << endl; // value change
        ++b;
    }
    */






    /*
    int a = 10;
    auto func = [&a]() {
        std::cout << "Inner func value: " << a << endl; // value change, we work with orig
    };
    for (unsigned int i = 0; i < 5; i++) {
        func();
        std::cout << "Outer func value: " << a << endl; // value change, we work with orig
        a++;
    }
    */



    // [=] we can get access to all variables out lambda
    // we work with COPY vars

    /*
    string s = "Hello, world!";
    int b = 10;
    [=]() {
        std::cout << s << endl;
        std::cout << b << endl;
    }();
    std::cout << b << endl;
    */



    // [&] we can get access to all variables out lambda
    // we work with ORIG vars because we have reference[&]

    /*
    string s = "Hello, world!";
    int b = 10;
    [&]() {
        b = 100;
        std::cout << s << endl;
        std::cout << b << endl;
    }();
    std::cout << b << endl;
    */


    return 0;
}