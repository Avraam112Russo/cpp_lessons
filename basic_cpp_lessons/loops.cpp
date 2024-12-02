#include<iostream>
#include <limits>
using namespace std;
int main() {

    int response;
    std::cout<<"Enter your answer: "<<endl;
    std::cin>>response;
    while (response < 20) {
        switch (response) {
            case 10 : {
                std::cout << "Your response is 10" <<endl;
            }
            break;
            case 12 : {
                std::cout<<"Your response is 12"<<endl;
            }
            break;
            default: {
                std::cout << "Default case selected " <<endl;
            }
        }
        if (response < 20) {
            std::cout<<"Enter your answer one more time: "<<endl;
            std::cin>>response;
        }
    }
    std::cout<<"Game over..."<<endl;

    std::cout<<"======================================"<<endl;

    int i;
    std::cin>>i;
    int b = (i < 100) ? 666 : 999;
    std::cout<<b<<endl;

    std::cout<<"======================================"<<endl;
    bool b1{false};
    for (size_t i{1};i < 10;++i) {
        std::cout<<i<<std::endl;
        if (b1==false) {
            std::cout<<"Size of var: "<<sizeof(i);
            b1=true;
        }
    }
    std::cout<<"================"<<endl;
    int j = 0;
    for (j; j < 10; j++) {
        std::cout<<j<<endl;
    }
    std::cout<<"================"<<endl;
    for (unsigned int i{0}; i < 10; i++) {
        std::cout<<"Hello, world!"<<std::endl;
        std::cout<<numeric_limits<unsigned int>::max()<<endl;;
    }
    std::cout<<"================"<<endl;
    int val = 0;
    while (val<10) {
        std::cout<<"Value: "<<val<<endl;
        val++;
    }
    std::cout<<"================"<<endl;
    int val2 = 0;
    do {
        std::cout<<val2<<endl;
        val2++;
    }while (val2<10);
    std::cout<<"================"<<endl;

    int arr [10];
    int array_length=0;
    for (auto i : arr) {
        array_length++;
    }
    for (int i = 0; i < array_length; i++) {
        arr[i] = i;
    }
    for (auto i : arr) {
        std::cout<<"Element number "<<i<<endl;
    }


    return 0;
}