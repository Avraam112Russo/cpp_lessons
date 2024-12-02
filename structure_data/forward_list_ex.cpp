#include <forward_list>
#include<iostream>
#include<vector>
using namespace std;


bool digit_greater_than_100(const int & value) {
    return value > 100;
}
int main() {


    /*
    std::vector<int> vector;
    for (int i = 0; i <=666; ++i) {
        vector.push_back(i);
    }
    // std::vector<int>::const_iterator cit = vector.cbegin();
    // for (; cit != vector.end(); ++cit) cout << *cit << endl;
    if (!vector.empty()) for (int i = 0; i < vector.size(); ++i) std::cout << *(vector.data() + i) << endl;;
    */

    // assign();
    /*
    std::forward_list<int> forward_list;
    for (int i = 0; i < 100;++i) forward_list.push_front(i);
    std::forward_list<int> new_forward_list;
    new_forward_list.assign(forward_list.begin(), forward_list.end()); // assign all elements from one list to another
    std::forward_list<int>::const_iterator cit = new_forward_list.begin();
    for (; cit != new_forward_list.end();++cit) {
        std::cout << typeid(new_forward_list).name() << ": " << *cit << endl;
    }
    */


    // before_begin();
    /*
    std::forward_list<int> fl;
    for (int i = 0; i < 10; ++i) fl.push_front(i);
    fl.insert_after(fl.before_begin(), 666); // insert element before first element
    for (std::forward_list<int>::const_iterator cit = fl.cbegin(); cit != fl.cend(); ++cit)
        cout << *cit << endl;
    */


    // emplace_after(); creating right in args function and inserting a new element after the element at position
    // emplace_before();
    /*
    forward_list<double> fl;
    int i = 0;
    while (i < 10) {
        fl.push_front(i);
        i++;
    }
    fl.emplace_after(fl.before_begin(), 100); // insert before first element
    fl.emplace_after(fl.before_begin(), 666); // insert before first element
    fl.emplace_front(777); // also insert before first element
    for (const auto & el : fl) cout << el << endl; // output: 666 100 9 8 7 6 5 4 3 2 1
     cout << "=====================" << endl;

    std::forward_list<double>::iterator cit = fl.begin();
    for (; cit != fl.end();++cit)
        if (*cit == 100) {
            fl.emplace_after(cit, 8888); // create and insert element after "100"
        }
    for (const auto & el : fl) cout << el << endl; // output: 666 100 9 8 7 6 5 4 3 2 1
    return 0;
    */

    // erase_after();
    /*
    std::forward_list<int> * ptr_forward_list = nullptr;
    ptr_forward_list = new std::forward_list<int>;
    for (int i = 0; i < 1000; ++i)  ptr_forward_list->push_front(i);
    for (const auto & el : *ptr_forward_list) std::cout << el << endl;
    cout << "======================" << endl;
    for (std::forward_list<int>::iterator it = ptr_forward_list->begin(); it != ptr_forward_list->end(); ++it) {
        if (*it == 667) ptr_forward_list->erase_after(it);
    }
    for (const auto & el : *ptr_forward_list) std::cout << el << endl;
    delete ptr_forward_list;
    */


    // sort();
    /*
    std::forward_list<int> forward_list = {97, 102, 34, 25, 67};
    forward_list.sort(); // 25 34 67 97 102
    for (auto & i : forward_list) cout << i << endl;
    cout << "==============" << endl;
    forward_list.sort(std::greater<int>());// 102 97 67 34 25
    for (auto & i : forward_list) cout << i << endl;
    */

    // merge(); // union two forward_lists
    /*
    std::forward_list<int> fl; // list 1
    for (int i = 0; i < 10; ++i) fl.push_front(i);

    std::forward_list<int> fl2 = {666, 500, 700, 200};

    fl.sort();
    fl2.sort();


    fl.merge(fl2);
    for (std::forward_list<int>::const_iterator cit = fl.begin(); cit != fl.cend(); ++cit) cout << *cit << endl;
    */


    //push_front(); add first element
    //pop_front() // remove first element
    /*
    std::forward_list<int> fl = {100, 200, 300, 400, 500};
    fl.pop_front(); // remove 100

    fl.push_front(666);
    for(auto iterator = fl.begin(); iterator != fl.end(); ++iterator)
        cout << *iterator << endl; // output: 666 200 300 400 500
    */

    // remove(); Removes from the container all the elements that compare equal to val and this calls the destructor of these objects
    /*
    std::forward_list<std::string> forward_list = {"Russo", "Elena", "Dasha", "Misha", "Dasha"};
    forward_list.remove("Dasha"); // remove both elements with values "Dasha"
    for (auto it = forward_list.begin(); it != forward_list.end(); ++it) std::cout << *it << endl; // output: Russo ELena Misha
    */

    // remove_if();
    // Removes from the container all the elements for which Predicate pred returns true
    /*
    std::forward_list<int> fl = {200, 99, 45, 104, 56, 302, 666};
    fl.remove_if(&digit_greater_than_100); // remove all elements that greater 100
    for (std::forward_list<int>::const_iterator cit = fl.begin();cit!=fl.end();++cit)
        cout << *cit << endl; // output: 99 45 56
    */

    // resize(); change size forward_list
    /*
    forward_list<double> fl = {9.9, 5.6, 7.8, 10.6, 8.8};
    fl.resize(3);
    for (auto & element : fl) cout << element << endl; // output: 9.9 5.6 7.8, rest will be removed from forward_list
    */

    // reverse(); Reverses the order of the elements in the forward_list container.
    /*
    std::forward_list<int> fl = {100, 54, 33, 45};
    fl.reverse();
    for (std::forward_list<int>::const_iterator it = fl.cbegin(); it != fl.cend();++it)
        cout << *it << endl; // output: 45 33 54 100
    */


    // splice();
    /*
    std::forward_list<int> forward_list = {100, 200, 300};
    std::forward_list<int> forward_list_2 = {1, 2, 3};
    forward_list.splice_after(forward_list.before_begin(), forward_list_2);
    for (auto & el : forward_list) cout << el << endl;
    */


    //swap();
    // Exchanges the content of the container by the content of fwdlst,
    // which is another forward_list object of the same type. Sizes may differ.
    /*
    std::forward_list<int> fl = {100, 200, 300};
    std::forward_list<int> fl2 = {1, 2, 3};
    fl.swap(fl2);
    for (auto it = fl.cbegin(); it != fl.end(); ++it) cout << *it << endl; cout << "=======" << endl;
    for (auto it = fl2.cbegin(); it != fl2.end(); ++it) cout << *it << endl;
    */


    // remove duplicate values if it compares equal to the element immediately preceding it
    std::forward_list<int> fl = {33, 20, 40, 15, 14, 69, 15, 20};
    fl.sort();
    fl.unique();
    for (std::forward_list<int>::const_iterator cit = fl.cbegin(); cit != fl.cend(); ++cit)
        cout << *cit << endl; // output: 14 15 20 33 40 69 // 15 and 20 is a duplicate values have been deleted
}