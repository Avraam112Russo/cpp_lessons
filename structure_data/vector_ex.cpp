#include <iostream>
#include <vector>

using namespace std;

int main() {


    /*


    string s = "Hello";
    string ss = "World";
    string sss = "!!!";
    std::vector<std::string> my_vector = {s, ss, sss};

    // get element by index
    for (int i = 0; i < my_vector.size(); i++) {
        cout << my_vector.at(i) << "\n"; // 1 syntax
        cout << my_vector[i] << "\n"; // 2 syntax
    }

    // update
    for (int i = 0; i < my_vector.size(); i++) {
        my_vector.at(i) = "New value"; // 1 syntax
        cout << my_vector.at(i) << "\n";
        my_vector[i] = "New value x2"; // 2 syntax
        cout << my_vector.at(i) << "\n";
    }



    */






    /*



    // insert in any place: start, middle or end O(n)
    cout << "========================" << endl;

    std::vector<string> cities = {"Moscow", "Almaty", "New-york", "Saint-petersburg"};
    cities.insert(cities.begin() + 2, "Berlin"); // insert in v[2] position (index 3) // O(N);
    for (auto & element : cities) {
        cout << element << "\n";
    }

    // insert in end vector O(1)
    cout << "========================" << endl;
    std::string rome = "Rome";
    cities.push_back(rome);
    for (auto & element : cities) {
        cout << element << "\n";
    }


    // delete
    cout << "========================" << endl;
    // cities.erase(cities.begin());;// delete 0 index;
    cities.erase(cities.begin() + 3);;// delete 3 index;
    for (auto & element : cities) {
        cout << element << "\n";
    }


    */




    /*


    // assign()
    // Assigns new contents to the vector, replacing its current contents, and modifying its size accordingly.
    std::vector<int> some_vector {100, 200, 300, 400, 500};
    std::vector<int> some_vector2 {1, 2, 3, 4, 5};

    for (int & i : some_vector2) { // some_vector2 {1, 2, 3, 4, 5};
        std::cout << i << "\n";
    }

    // Assigns new contents to the vector, replacing its current contents, and modifying its size accordingly.
    some_vector2.assign(some_vector.begin(), some_vector.end());

    for (int & i : some_vector2) { // some_vector2 {100, 200, 300, 400, 500};
        std::cout << i << "\n";
    }


    */




    /*
    // back() -> Returns a reference to the last element in the vector.
    std::vector<unsigned int> vector = {100, 200, 300, 400, 500};
    std::cout << vector.back() << std::endl; // return 500 -> last element
    */


    /*

    // begin(); returns an iterator pointing to the first element in the vector.
    // return pointer to the first element

    std::vector<unsigned int> my_vector = {100, 200, 300, 400, 500};
    for (std::vector<unsigned int>::iterator it = my_vector.begin(); it != my_vector.end(); it++) {
        std::cout << *it << std::endl;
    }

    */



    /*


    // capacity(); size(); max_size();

    std::vector<unsigned int> vector;
    for (int i = 0; i < 100; i++) vector.push_back(i);
    // Returns the number of elements in the vector.
    std::cout << "Size: " << vector.size() << endl; // Size: 100

    // Returns the size of the storage space currently allocated for the vector, expressed in terms of elements.
    std::cout << "Capacity: " << vector.capacity() << endl; // Capacity: 128

    // Returns the maximum number of elements that the vector can hold.
    std::cout << "Max size: " << vector.max_size() << endl; // Max size: 2305843009213693951

    */




    // cbegin(); returns a const iterator pointing to the first element in the vector.
    /*
    std::vector<unsigned int> my_vector;
    for (int i=0;i<10;i++) my_vector.push_back(i);
    for (std::vector<unsigned int>::iterator it = my_vector.begin(); it != my_vector.end(); it++) {
        if (*it == 3) {
            *it=666; // success, unlike cbegin()
        }
        std::cout << *it << endl;
    }
    */


    /* cbegin(); it cannot be used to modify the contents it points to
     *
    std::vector<int> my_vector;
    for (int i = 0; i < 1000; i += 100) {
        my_vector.push_back(i);
    }
    for (auto it = my_vector.cbegin(); it != my_vector.end(); it ++) {
        // // error: cbegin is a const iterator,
        // it cannot be used to modify the contents it points to,
        // if (*it==300) *it=666;

        std::cout << *it << endl;
    }
    */


    /*
    // cend();
    // Returns a const_iterator pointing to the past-the-end element in the container.
    // it cannot be used to modify the contents it points to
    std::vector<std::string> my_vector;
    for (int i = 0;  i < 100; i++) my_vector.push_back(std::to_string(i));
    for (auto iterator = my_vector.cend(); iterator != my_vector.begin(); --iterator) {
        if (*iterator == "66") {
            // *iterator = "777"; // error: because this is const iterator, same and cbegin();
        }
        std::cout << *iterator << endl;
    }
    */



    // clear(); Removes all elements from the vector (which are destroyed), leaving the container with a size of 0.
    /*
    std:: vector<size_t> my_vector;
    int i = 0;
    while (i < 100) {
        my_vector.push_back(i);
        ++i;
    }
    for (std::vector<size_t>::iterator iterator = my_vector.begin(); iterator != my_vector.end(); iterator++) {
        std::cout << *iterator << endl;
    }
    my_vector.clear();
    if (my_vector.empty() == true) std::cout << "Vector clear successfully" << endl;
    else std::cout << "Something went wrong" << endl;
    std::cout << my_vector.size() << endl;
    */



    /* crbegin(); crend(); I didn't find any difference between them in docs cpp.ref:)
    // Returns a const_reverse_iterator pointing to the last element in the container (i.e., its reverse beginning).
    std::vector<unsigned int> vector = {1, 2, 3, 4, 5};
    for (auto iterator = vector.crbegin(); iterator != vector.crend(); iterator++) std::cout << *iterator << endl; // output: 5 4 3 2 1


    // Returns a const_reverse_iterator pointing to the theoretical element preceding the first element in the container (which is considered its reverse end).
    std::vector<double> v {2.3, 4.6, 3.7, 9.8};
    for (auto it = v.crbegin(); it != v.crend(); ++it) std::cout << *it << endl;
    */


    // data(); return a pointer to the first element in the array used internally by the vector.
    /*
    std::vector<int> vector {100, 200, 300, 400, 500};
    int * ptr = vector.data(); // pointer to the first element
    std::cout << *ptr << endl;// output: 100
    std::cout << *(++ptr) << endl; // output: 200

    std::vector<int> vector;
    for (int i=0;i<10;i++)vector.push_back(i);
    for (int i = 0; i < vector.size(); i++) std::cout << *(vector.data() + i) << endl; // output 1 2 3 ... 8 9
    */




    // emplace();
    // create new element right in the args emplace(new El) and insert to the specify position

    /*
    std::vector<int> my_vector = {100, 200, 300};
    std::cout << *(my_vector.emplace(my_vector.begin() + 1, 666)) << endl; // return pointer to the 666 value
    // now we have vector: 100, 666, 299, 300

    for (std::vector<int>::iterator it = my_vector.begin(); it != my_vector.end(); it++) {
        std::cout << *it << endl;;
    }
    */




    /*

    // emplace_back();
    // create and insert new element to the end vector
    std::vector<int> my_vector;
    for (int i = 0; i < 10; i++) my_vector.push_back(i);
    for (std::vector<int>::iterator it = my_vector.begin(); it != my_vector.end(); ++it)
        std::cout << *it << std::endl;
    my_vector.emplace_back( 666); // insert new element to the end vector
    int i = 0;
    std::cout << "After insert new el: " << endl;
    while (i < my_vector.size()) {
        std::cout << my_vector.at(i) << std::endl;
        i++;
    }
    */


    // empty();
    // will return true if the container is empty
    /*
    std::vector<int> v;
    if (v.empty()) std::cout << "Vector is empty ..." << std::endl;
    else std::cout << "Vector containing some elements" << std::endl;
    // output: Vector is empty ...
    */



    //end();
    // An iterator to the element past the end of the sequence.
    /*
    std::vector<unsigned int> vector;
    for (int i = 0; i < 10; i++) vector.push_back(i);
    std::cout << *(vector.end()) << endl; // return 0;
    std::cout << *(vector.end() - 1) << endl; // return last element -> 9
    */

    /*
    vector<int> v = {100, 200, 300, 400, 500};
    v.erase(v.begin() + 1); // remove 200
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << endl;
    }
    cout << "======================" << endl;
    vector<int> vv = {100, 200, 300, 400, 500, 6000};
    // std::cout << *(vv.erase(vv.begin() + 1, vv.begin() + 3)) << endl;; // remove 200, 300 and return iterator on 400
    vv.erase(vv.begin() + 1, vv.begin() + 3); // remove 200, 300
    int i = 0;
    do {
        cout << vv.at(i) << "\n";
        ++i;
    }while (i < vv.size());
    */


    /*
    // front(); Returns a reference to the first element in the vector.
    // unlike begin() which return iterator. front() return reference.
    std::vector<unsigned int> vector;
    for (int i = 0; i < 1000; i += 100) {
        vector.push_back(i);
    }
    if (!vector.empty()) std::cout << vector.front() << endl; // output: 0
    */


    // insert();
    /*
    std::vector<double> vector = {1.1, 3.55, 6.9};
    vector.insert(vector.begin() + 1, 666.66); // insert value after 1.1;
    for (auto & v :vector) std::cout << v << endl;
    // output: 1.1 666.66 3.55 6.9
    */


    // operator "[]" -> A similar member function, vector::at,
    /*
    std::vector<int> vector = {100, 200, 300, 400};
    cout << vector[1] << endl;
    */


    // operator "="
    /*
    std::vector<int> vector = {100, 200, 300};
    std::vector<int> vector_2 = {12, 13, 14};
    vector = vector_2;
    for (int i = 0; i < vector_2.size(); i++) std::cout << vector.at(i) << std::endl;
    */


    /*
    // pop_back(); removed and destroyed last element
    std::vector<int> vector = {100, 200, 300, 400};
    vector.pop_back(); // remove 400
    vector.pop_back(); // remove 300
    std::vector<int>::iterator iterator = vector.begin();
    for (iterator; iterator != vector.end(); ++iterator) std::cout << *iterator << std::endl;
    */



    // push_back(); add new element to the end vector
    /*
    int i = 100;
    int b = 200;
    int c = 300;
    // we work with original value
    std::vector<int*> v  = {&i, &b, &c};
    *v[0] = 300;
    // we work with original value
    for (auto & it : v) std::cout << *it << endl; //  300 200 300
    std::cout << i << endl; // 300
    std::cout << b << endl; // 200
    std::cout << c << endl; // 300

    int t = 666;
    v.push_back(&t); //  push ref in the end vector
    cout<<"========="<<endl;
    for (auto & it : v) std::cout << *it << endl;
    */







    // rbegin(); rend(); Returns a reverse iterator pointing to the last element in the vector (i.e., its reverse beginning).
    // Reverse iterators iterate backwards: increasing them moves them towards the beginning of the container.
    // In other words rbegin() pointing  to the last vector element, rend() pointing to the first element
    /*
    vector<double> vector = {1.1, 2.3, 4.55, 6.33};
    for (std::vector<double>::reverse_iterator it = vector.rbegin(); it != vector.rend(); ++it)
        std::cout << *it << endl;
        */







    // reserve();
    // set capacity for vector
    /*
    std::vector<int> vector;
    vector.reserve(1024);
    std::cout << vector.capacity() << endl; // output: now capacity 1024
    vector.reserve(2056);
    std::cout << vector.capacity() << endl; // output: now capacity 2056
    */





    // resize(); set new vector size
    //Resizes the container so that it contains n elements.
    // If n is smaller than the current container size, the content is reduced to its first n elements,
    // removing those beyond(and destroying them)
    /*
    vector<int> vector = {100, 200, 300, 400, 500, 600, 700, 800, 900};
    for (auto & i : vector) std::cout << i << endl; // output: 100, 200, 300, 400, 500, 600, 700, 800, 900

    vector.resize(5);
    std::cout << "======================" << endl;
    // output: 100, 200, 300, 400, 500. leave only the last 5 element, the rest will be deleted
    for (auto & i : vector) std::cout << i << endl;
    std::cout << "======================" << endl;
    vector<int> v = {100, 200, 300};
    v.resize(5, 666);  // new size (5) and value 666 will be added two times in vector
    for (auto & i : v) std::cout << i << endl; // output: 100 200 300 666 666
    */



    // shrink_to_fit();
    // reduce capacity to size vector
    /*
    std::vector<int> v;
    v.reserve(1024);
    for (int i = 0; i < 100; i++) v.push_back(i); // add any data
    std::cout << "Currently capacity: " << v.capacity() << endl; // 1024
    std::cout << "Currently size: " << v.size() << endl; // 100

    v.shrink_to_fit(); // Requests the container to reduce its capacity to fit its size.

    std::cout << "Currently capacity: " << v.capacity() << endl; // 100
    std::cout << "Currently size: " << v.size() << endl; // 100
    */


    /*
    // swap(); exchange contents between two vector
    std::vector<int> vector = {100, 200, 300};
    std::vector<int> vector2 = {666, 777, 888};
    vector.swap(vector2); // exchange contents between two vector // vector -> vector2; vector -> vector
    int ii = 0;
    for (int i = 0; i < vector.size() + vector2.size(); i++) {
        if (i < vector.size()) {
            std::cout << "Vector: " << vector[i]  << endl; // 666 777 888
        } else {
            std::cout << "Vector2: " << vector2[ii] << endl; // 100 200 300
            ii++;
        }
    }
    */


    /* just example
    std::vector<int> vector = {1, 2, 3};
    vector.emplace(vector.begin()+3, 100);
    for (auto &  i : vector) std::cout << i << endl;
    vector.insert(vector.begin(), 666);
    for (auto & i : vector) std::cout << i << endl;
    */
    return 0;
}
