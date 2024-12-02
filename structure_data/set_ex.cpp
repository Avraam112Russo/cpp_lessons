
#include<iostream>
#include<set>
using namespace std;


int main() {


    //emplace();
    /*
    std::set<int> my_set;
    for (int i = 0; i < 10; ++i) {
        my_set.emplace(i);
    }

    for (std::set<int>::const_iterator it = my_set.begin(); it != my_set.end();++it)
        cout << *it << endl;
    auto result = my_set.emplace(7);
    if (!result.second) cout << "Value 7 already exist" << endl;
    */


    // key_comp();
    // begin();
    // end();
    std::set<int> set_int;
    std::set<int>::key_compare key_comp;
    for (int i = 0; i < 100; i++)set_int.emplace(i);
    std::set<int>::iterator it = set_int.begin();
    for (; it != set_int.end(); ++it) {
        if (!key_comp(*it, 130)) {
            cout << "Match found: " << *it << endl;
            break;
        }
    }
    if (it == set_int.end()) cout << "Match not found.." << endl;


    std::set<int> my_set;
    for (int i = 0; i < 100; ++i) my_set.emplace(i);
    std::set<int>::iterator lower = my_set.lower_bound(10);
    std::set<int>::iterator highest = my_set.upper_bound(90);
    my_set.erase(lower, highest); // remove all values from 10 to 90
    for (std::set<int>::iterator ite = my_set.begin(); ite != my_set.end(); ++ite) {
        cout << *ite << endl; // 1 2 3 ... 9 and 91 92 ... 98 99
    }

    return 0;
}