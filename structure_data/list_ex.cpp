


#include<iostream>
#include<list>
using namespace std;

int main() {


    std::list<int> my_list = {100, 200, 300, 400, 500};
    for (std::list<int>::const_iterator cit = my_list.begin(); cit != my_list.end(); ++cit) {
        cout << * cit << endl;
    }
    cout << "push_back(); push_front();====================" << endl;
    my_list.push_back(666);// add new el to the end
    my_list.push_front(666); // add new element to the start


    for (std::list<int>::const_iterator cit = my_list.begin(); cit != my_list.end(); ++cit) {
        cout << * cit << endl;
    }
    cout << "pop_back();pop_front(); ====================" << endl;
    my_list.pop_back(); // delete element from the end
    my_list.pop_front(); // delete from the start position


    for (std::list<int>::const_iterator cit = my_list.begin(); cit != my_list.end(); ++cit) {
        cout << * cit << endl;
    }
    cout << " emplace();emplace_front();emplace_back(); ====================" << endl;

    for (auto it = my_list.begin(); it != my_list.end(); ++it) {
        if (*it == 300)
            my_list.emplace(it, 666);
    }
    my_list.emplace_front(666);
    my_list.emplace_back(666);
    for (const auto & i : my_list) cout << i << endl;

    cout << " erase(); ====================" << endl;
    for (auto it = my_list.begin(); it != my_list.end(); ++it) {
        cout << *it << endl;
        if (*it == 300) {
            my_list.erase(it);
            cout << *it << " deleted successfully" << endl;
        }
    }
    return 0;
}