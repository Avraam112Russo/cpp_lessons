#include<iostream>
using namespace std;


int main() {

    /*
try {
    int size{10};
    int* arr{new int[size]{100, 2, 3, 4, 5, 6, 7, 8, 9, 10}};
    for (int i = 0; i < size; i++) {
        // arr[i] << " : " << *(arr + i)
        std::cout << "Value: " << arr[i] << " : " << *(arr + i) << endl;
    }
    delete [] arr;
}catch (std::exception& exception) {
    std::cout << "Something went wrong: "<< exception.what()<< endl;;
}
std::cout << "Program ends well" << endl;
*/
    /*
    int* arr {new(std::nothrow) int[100]{1, 2, 3}};
    for (int i = 0; i < 100; i++) {
        std::cout << "Value: " << arr[i] << endl;
    }
    */

    /*
    int arr [] = {1, 2, 3}; // lives in stack

    int sizearr = 100;
    int* array{new(nothrow) int[sizearr]}; // lives in heap
    if (array!=nullptr) {

    for (int i = 0; i < sizearr; i++) {
        array[i] = i;
    }
        cout<<"Array populate well"<<endl;
    for (int i = 0; i < sizearr; i++) {
        std::cout << array[i] << endl;
    }
    delete [] array;
    array = nullptr;
    }else {
        cout<<"Something went wrong"<<endl;
    }
    */
    return 0;
}