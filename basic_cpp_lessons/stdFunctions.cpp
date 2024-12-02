#include <iomanip>
#include<iostream>
#include <limits>
using namespace std;
int main() {



    // Boolean as true or false, not 1 or 0

    int i = 130;
    int b = 12;

    bool a = i > b;
    std::cout<<std::boolalpha<<"result: "<<a<<endl;





    std::cout << std::hex
              << "showbase: " << std::showbase << 42 << '\n'
              << "noshowbase: " << std::noshowbase << 42 << '\n';
    std::cout<<"==============================="<<endl;
    std::cout<<std::hex<<1000;





    // flush data to the stream without buffer

    std::cout<<"==============================="<<std::endl;
    std::cout<<"Hola!"<<std::flush<<"Russo"<<std::flush<<std::endl;
    std::cout<<"==============================="<<std::endl;
    std::cout<<true<<std::endl;
    std::cout<<false<<std::endl;
    std::cout<<std::boolalpha;
    std::cout<<true<< std::endl;
    std::cout<<true<< std::endl;



    // show + on positive number
    std::cout<<std::showpos<<34<<endl;




    std::cout<<std::uppercase;
    std::cout<<std::hex<<2000<<endl;




    std::cout<<16.5<<endl;

    std::cout<<noshowpoint;
    std::cout<<16.54<<endl;
    std::cout<<163.5<<endl;

    std::cout<<std::showpoint;
    std::cout<<16.54<<endl;
    std::cout<<164.5<<endl;
    std::cout<<1.5<<endl;


    // set width for output data in the terminal and populate freedom place this symbol'-'
    std::cout<<std::setw(10);
    std::cout<<std::setfill('-');
    std::cout<<"hola"<<std::endl;;
    std::cout<<std::setw(10);
    std::cout<<"hola"<<std::endl;;
    std::cout<<std::setw(10);
    std::cout<<"hola"<<std::endl;;


    /*
       SIZE of / SIZE



       cout<<"Size of int: "<<sizeof(int)<<endl;
       string msg="Hello, world";
       cout<<"Size of string: "<<size(msg)<<endl;

       string msg2="Hello, world Hello, world Hello, world";
       cout<<"Size of string: "<<size(msg2)<<endl;
       */

    /*
    SIGNED / UNSIGNED



    unsigned int i = -10008;
    signed int b = -10008;
    cout<<i;
    cout<<b;
    */


    /*
    short int, long int



    int num = 10;
    std::cout<<"Int: "<<sizeof(num)<<endl;

    short int num2 = 10;
    std::cout<<"short int: "<<sizeof(num2)<<endl;

    long long int num3 = 10;
    std::cout<<"Long Int: "<<sizeof(num3)<<endl;
    */


    /*
    double float size


    float f = 10.5f;
    std::cout<<sizeof(f)<<endl;
    double d = 16.908;
    std::cout<<sizeof(d)<<endl;
    long double ld = 16.908l;
    std::cout<<sizeof(ld)<<endl;
    */

    /*
    Casting string to int


    std::string s = "666";
    int i = stoi(s);
    std::cout<<i * 2<<endl;
    */









    std::cout<<std::setprecision(7)<<20.2362364444444444444444;

    std::cout<<std::noshowpoint<<12.000<<endl;
    std::cout<<std::showpoint<<12.000<<endl;



    //Short from -32768 to 32767
    std::cout << "Short from " << std::numeric_limits<short>::min()
    << " to " << std::numeric_limits<short>::max() << endl;

    // Unsigned short from 0 to 65535
    std::cout << "Unsigned short from " << std::numeric_limits<unsigned short>::min()
    << " to "
    << std::numeric_limits<unsigned short>::max() << endl;

    //Int from -2147483648 to 2147483647
    std::cout<<"Int from "<<std::numeric_limits<signed int>::min()<<" to "
    << std::numeric_limits<signed int>::max()<<endl;

    //Unsigned int from 0 to 4294967295
    std::cout<<"Unsigned int from "<<std::numeric_limits<unsigned int>::min()<<" to "
        << std::numeric_limits<unsigned int>::max()<<endl;

    return 0;
}