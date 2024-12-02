#include<iostream>
#include<deque>
#include<vector>
using namespace std;
int main() {

    // just example
    /*
    std::deque<int> deque;
    for (int i =0 ;i < 10; i++) deque.push_back(i);

    for (auto & i : deque) {
        std::cout << i << std::endl;
    }
    deque.push_back(666);
    deque.push_front(777);
    std::cout << "====================" << std::endl;
    for (std::deque<int>::const_iterator cit = deque.begin(); cit != deque.end(); ++cit) {
        std::cout << *cit << std::endl;
    }
    */


    // assign(); set new content to deque

    /*
    std::deque<double> d;
    std::deque<double> v;
    int i = 0;
    while (i < 100) {
        d.push_back(i);
        ++i;
    }
    int ii = 0;
    while (ii < 10) {
        v.push_back(ii);
        ++ii;
    }

    v.assign(d.begin(), d.end()); // assign all elements from d to v  // syntax 1
    d.assign(20, 666); // assign 20 elements, each has value 666 // syntax 2

    std::deque<double>::iterator it = d.begin(); // syntax 1
    auto ite = v.begin(); // syntax 2

    for (; it!= d.end(); ++it) std::cout << "d: " << *it << std::endl;
    for (; ite != v.end(); ++ite) std::cout << "v: " << *ite << std::endl;
    */


    // at();
    /*
    std::deque<unsigned int> deque;
    for (int i = 0; i < 10; ++i) deque.push_back(i);
    deque.push_front(666);
    deque.push_front(777);
    deque.push_front(888);
    deque.pop_front(); // delete first element 888
    std::cout << deque.at(0) << std::endl; // output: 777
    */

    //back(); return ref to the last element
    /*
    std::deque<double> my_deque = {2.4, 3.3, 4.5};
    std::cout << my_deque.back() << std::endl; // output 4.5
    */


    // cbegin(); cend(); const iterator read-only mode
    /*
    std::deque<unsigned int> deque;
    for (int i = 0; i < 10; ++i) deque.push_back(i);

    std::deque<unsigned int>::const_iterator it = deque.cbegin();
    for (; it != deque.cend(); ++it) std::cout << *it << std::endl;
    */


    // clear(); remove all elements
    /*
    std::deque<std::string> deque = {"Elena", "Dasha", "Russo", "Pavel"};
    deque.clear();
    if (deque.empty()) std::cout << "SUCCESS" << std::endl;
    else std::cout << "something went wrong"<< std::endl;
    */


    // crbegin(); reverse begin -> const iterator last element
    // crend(); reverse end -> const iterator first element
    /*
    deque<int> my_deque = {100, 200, 300, 400};
    my_deque.push_back(666);
    my_deque.push_front(666);
    deque<int>::const_reverse_iterator it = my_deque.crbegin(); // read-only
    for (; it != my_deque.crend(); ++it)
        std::cout << *it << endl; // output: 666 400 300 200 100 666
    */



    /*
    std::string s = "Hello";
    std::string s2 = "World";
    std::string s3 = "!!!";
    deque<string*> deq = {&s, &s2, &s3};
    cout << deq[0] << endl;
    cout << deq[1] << endl;
    cout << deq[2] << endl;
    // for (int i = 0; i < deq.size(); ++i) {
    // }
    */


    // erase(from iterator, to iterator);
    /*
    std::deque<int> deq;
    for (int i =0; i < 10; ++i) deq.push_back(i);
    for (int i =0; i < 10; ++i) cout << deq.at(i) << endl;;

    // remove all deque
    deq.erase(deq.begin(), deq.end());
    // show true if deque is empty
    cout << std::boolalpha << deq.empty() << endl;
    */


    // remove last el, remove first el;
    // pop_back(); pop_front();
    /*
    std::deque<int> deq;
    for (int i =0; i < 10; ++i) deq.push_back(i);
    deq.pop_back(); // remove last element // remove 9
    deq.pop_front(); // remove first element // remove 0
    for (std::deque<int>::iterator it = deq.begin(); it != deq.end(); ++it)
        cout << *it << endl;
        // output: 12345678
    */


    // push_back(); push_front();
    /*
    std::deque<int> deq;
    for (int i = 0; i < 10; ++i) deq.push_back(i);
    for (auto it = deq.crbegin(); it != deq.crend();++it) cout << *it << endl;
    cout << "==============" << endl;
    deq.push_front(666);
    int a = 0;
    while(a < deq.size()) {
        std::cout << deq.at(a) << endl;
        ++a;
    }
    */



    // insert ();
    /*
    deque<int> deq = {100, 200, 300};
    deq.insert(deq.begin() + 2, 666); // 1arg - position, 2arg - value
    for (auto i : deq) cout << i << endl;
    */


    // set capacity when we initialized deque
    /*
    std::deque<int> deq(10); // set capacity
    deq.at(2) = 666;
    for (std::deque<int>::iterator it = deq.begin(); it != deq.end();++it) {
        cout << *it << endl;
    }
    */


    // just lambda
    auto s = [](int i, int b) {
        std::cout << i + b << endl;
    };
    s(100, 35);


    return 0;
}