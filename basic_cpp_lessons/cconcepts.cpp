#include <concepts>
#include <cstdint>
#include<iostream>
#include <limits>


//standard c++ concepts
// syntax 1
template<typename T>
void some_func(T arg) requires std::integral<T> {
    std::cout << arg << std::endl;
}

template <typename T>
void some_func_2(T arg) requires std::same_as<T, int> {
    std::cout << arg << std::endl;
}

//syntax 2
template<std::integral T>
void some_func_3(T arg) {
    std::cout << arg << std::endl;
}

// syntax 3
auto some_func_3(auto a, auto b) {
    return a + b;
}

// syntax 4
auto some_func_4(std::integral auto arg, std::integral auto arg2) {
    return arg + arg2;
}


// custom user define concepts
//
template<typename T>
concept My_Custom_Integral = std::is_integral_v<T>;

//
template<typename T>
concept My_Custom_Multiable = requires (T arg, T arg2){
    arg * arg2; // just makes sure the syntax is valid
};
//
template  <typename T>
concept My_Custom_Incrementble = requires (T a){
    a+=1;
    ++a;
    ++a;
};



//syntax 1
template<typename T>
void some_func_5(T arg) requires My_Custom_Integral<T> {
    std::cout << "Value from some_func_5 with My_Custom_Integral: " << arg << std::endl;
}
//syntax 2
template<My_Custom_Integral T> void some_func_6(T arg) {
    std::cout << "Value from some_func_6 with My_Custom_Integral: " << arg << std::endl;
}
//syntax 3
auto some_func_7(My_Custom_Integral auto arg, My_Custom_Integral auto arg2) {
    return arg + arg2;
}
template<typename T> auto multiple(T a, T b) requires My_Custom_Multiable<T> {
    std::cout << "Hello from multiple func: " << a << " " << b  << std::endl;
}
// template<typename T>
// concept Addable = requires (T a, T b){
//     (a + b) noexcept -> std::convertible_to<int>;
// }

// &&
template<typename T>
void myfunc(T arg) requires std::integral<T> &&
    requires (T t){ sizeof(T) <= 4; requires sizeof(T) <= 4;}{
    std::cout << "Value: " << arg << std::endl;
}

// ||
template<typename T>
 requires std::integral<T> || std::floating_point<T> void some_func_9(T arg) {
    std::cout << arg << std::endl;
}


int main() {
    // std::cout << "WORK" << std::endl;
    // std::cout << "Short min: " << std::numeric_limits<short>::min() << std::endl;
    // std::cout << "Short max: " << std::numeric_limits<short>::max() << std::endl;


    //
    int d = 888;
    some_func(d);
    int i = 888;
    some_func_2(i);
    long f = 999L;
    some_func_3(f);


    //
    double e = 1.44;
    double s = 2.33;
    std::cout << "some_func_3: " << some_func_3(e, s) << std::endl;


    //
    unsigned int ii = 332;
    unsigned int iii = 332;
    std::cout << "some_func_4: " << some_func_4(ii, iii) << std::endl;



    // custom MY_INTEGRAL concepts

    // error, because we need only integral
    // double aa = 666.666;
    // some_func_5(aa);

    //success
    unsigned int sh = 25000;
    some_func_5(sh);

    //success
    int g = 777;
    some_func_6(g);

    //success
    unsigned int r = 1030;
    unsigned int rr = 1000;
    std::cout << "Result some_func_7: " << some_func_7(r, rr) << std::endl;


    // success
    int w = 10;
    int l = 33;
    multiple(w, l);

    // error: because 'arg * arg2' would be invalid:
    /*
    std::string str="Hola!";
    std::string str2="Russo!";
    multiple(str, str2);
    */




    return 0;
}