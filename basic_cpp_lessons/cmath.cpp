#include<cmath>
#include<iostream>
using namespace std;
int main() {

    //Round down value
    double value{std::floor(13.8)};
    std::cout<<value<<endl;
    //Round up value
    double value2{std::ceil(13.3)};
    std::cout<<value2<<endl;
    //Compute absolute value
    double value3{std::abs(-700)};
    std::cout<<value3<<endl;
    //Compute exponential function
    double f, i;
    f = 5;
    i = std::exp(f);
    std::cout<<"Exponential of value 2 is: "<<i<<endl;
    //Returns base raised to the power exponent:
    double p = 4.0;
    double d = 3.0;
    double result = std::pow(p, d);
    std::cout<<result<<endl;

    short s = 10;
    short e = 3;
    short res = s * e;
    std::cout<<res<<endl;
    return 0;
}