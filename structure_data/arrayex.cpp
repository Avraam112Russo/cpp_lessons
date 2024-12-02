#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main() {

    // operator "[]"
    /*
    std::array<int, 100> array;
    for (int i = 0; i < 10; i++) array[i]=i;
    for (std::array<int, sizeof(array) / sizeof(int)>::const_iterator it = array.begin(); it != array.end(); it++ ) {
        std::cout << *it << endl;
    }
    */

    // at();
    // unlike "[]" can throw exception std::out_of_range if we go out of bound
    /*
    std::array<unsigned int, 100> arr;
    try {

    for (int i = 0; i < arr.size(); i++) arr.at(i) = i;
        for (int i = 0; i < arr.size(); i++)
        std::cout << arr.at(i) << endl; // output: 1 2 3 4 5 ... 98 99
    } catch (std::out_of_range& exception) {
        std::cout << "Something went wrong: " << exception.what() << endl;
    }
    */


    // back(); returns Reference to the last element
    /*
    std::array<int, 3> arr = {100, 200, 300};
    std::cout << "Reference to the last element: " << arr.back() << endl; // output: 300
    */


    // begin(); returns an iterator pointing to the first element
    /*
    std::array<double, 10> arr;
    for (int i = 0; i < arr.size();i++) arr.at(i) = i;
    for (std::array<double, arr.size()>::iterator it = arr.begin(); it != arr.end(); ++it) {
        std::cout << *it << endl;
    }
    */


    // cbegin();
    /*
    std::array<int, 10>arr;
    for (int i = 0; i < arr.size();i++) arr[i]=i;
    for (std::array<int, arr.size()>::const_iterator const_iterator = arr.cbegin(); const_iterator != arr.cend(); ++const_iterator) {
        std::cout << *const_iterator << endl;
        // *const_iterator = 100; // error because we use const iterator
    }
    */




    /*

    //data(); returns pointer to the first element in array
    // front(); return ref to the first element
    std::array<unsigned int, 5> arr = {200, 300, 400, 500, 600};
    std::array<unsigned int, 5>::pointer ptr  = arr.data();
    std::cout << ptr << endl; // 0x6284dff900
    std::cout << *ptr << endl; // 200
    std::cout << *(ptr + 1) << endl; // 300
    std::cout << *(ptr + 2) << endl; // 400
    std::cout << *(ptr + 3) << endl; // 500

    std::cout << "========================" << endl;
    std::vector<int> vector;
    for (int i=0;i<10;i++)vector.push_back(i);
    for (int i = 0; i < vector.size(); i++) std::cout << *(vector.data() + i) << endl;


    //
    std::cout << vector.front() << endl; // return 0; 1 element



    */





    // fill(); Sets val as the value for all the elements in the array object.
    /*
    std::array<int, 10> array;
    array.fill(666);
    for (auto & i : array) std::cout << i << endl;
    */
    return 0;
}