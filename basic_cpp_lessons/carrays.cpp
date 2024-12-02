#include<iostream>
using namespace std;
int main() {

    int arr[10];
    arr[0] = 100;
    arr[1] = 200;
    arr[2] = 300;
    //  other array elements have a mock data
    for(auto i : arr) {
        std::cout << i <<endl;
    }

    std::cout<<"=============================="<<std::endl;
    double d_arr[5] = {1.0, 2.5, 3.5};
    for (double i : d_arr) {
        std::cout<<i<<endl;
    }
    std::cout<<"=============================="<<std::endl;
    int array [] = {100, 200, 300, 400, 500, 600, 700};
    std::cout<<"Array length: "<<std::size(array)<<endl;


    std::cout<<"=============================="<<std::endl;
    int array2[]{100, 200, 300};
    std::cout<<"Sizeof():"<<sizeof(array2) / sizeof(array2[0]);

    std::cout<<"=============================="<<std::endl;
    int array3 [] = {1, 2, 3};
    for (int i = 0; i < std::size(array3);i++) {
        std::cout<<array3[i]<<endl;
    }
    std::cout<<"=============================="<<std::endl;
    char c [] = {'h', 'e', 'l', 'l', 'o', '\0'};
    // hidden symbol for compiler '\0'
    std::cout << c << endl;


    std::cout<<"=============================="<<std::endl;
    char e [6] = {"Hello"};
    std::cout << e << endl;


    std::cout<<"=============================="<<std::endl;
    int ar [] {1, 2, 3};
    std::cout<<"Out of bound array "<<ar[4]<<endl;




    return 0;
}