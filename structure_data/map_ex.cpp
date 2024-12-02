#include <array>
#include <deque>
#include<iostream>
#include<map>
#include <vector>
using namespace std;

int main() {
    /*
    string s = "Hello";
    string s2 = "World";

    std::deque<string*> str_deque;
    str_deque.push_back(&s);
    str_deque.push_back(&s2);
    *str_deque.at(0) = "UPDATE";
    cout << s << endl;
    cout << s2 << endl;
    */

    /*
    const char * ptr = "hello";
    int i = 0;
    int count = 0;
    while (ptr[i] != '\0') {
        std::cout << ptr[i] << endl;;
        ++count;
        ++i;
    }
    std::cout << "Count: " << count << endl;
    */


    /*
    const char c [] = {'h', 'e', 'l', 'l', 'o'};
    cout << &c << endl;

    int arr [] = {1, 2, 3};
    int (* ptr) [3] = &arr;
    */

    // at(); // get value by key
    /*
    string s = "Russo";
    string s2 = "Elena";
    string s3 = "Sasha";
    std::map<int, string*> m = {
    {1, &s},{2, &s2}, {3, &s3}
    };
    *m.at(3) = "Fisher";
    std::cout << s3 << endl;; // output: s3 = Fisher
    */


    // begin();
    /*
    string s = "Moscow";
    string b = "Berlin";
    string a = "Almaty";
    std::map<int, string*> my_map;
    my_map.insert(std::pair<int, string*>(100, &s));
    my_map.insert(std::pair<int, string*>(200, &b));
    my_map.insert(std::pair<int, string*>(300, &a));
    for (std::map<int, string*>::const_iterator cit = my_map.begin(); cit != my_map.end(); ++cit)
        cout << "Key: " << cit->first << " Value: " << *cit->second <<endl;
    */


    // find(); return iterator on match key or end map;
    /*
    string s = "Moscow";
    string b = "Berlin";
    string a = "Almaty";
    std::map<int, string*> m;
    m.insert(std::pair<int, string *>(1, &s));
    m.insert(std::pair<int, string*>(2, &b));
    m.insert(std::pair<int, string*>(333, &a));

    std::map<int, string*>::iterator it = m.find(333);
    cout << it->first << " = " << *it->second<<endl;
    *it->second = "New-york";
    cout << a << endl;
    */

    // count(); return 1 if the container contains an element whose key is equivalent to k, or zero otherwise.
    /*
    string s = "Moscow";
    string b = "Berlin";
    string a = "Almaty";
    std::map<int, string*> m;
    m.insert(std::pair<int, string*>(1, &s));
    m.insert(std::pair<int, string*>(2, &b));
    m.insert(std::pair<int, string*>(3, &a));

    if (m.count(1) > 0) std::cout << "found value" << endl;
    else std::cout << "not found" << endl;
    */



    //emplace(); insert pair
    // emplace_hint(); insert pair and return iterator with hint position
    /*
    std::map<int, double> m = {
    {100, 4.7},{101, 4.4}, {102, 4.9}
    };
    m.emplace(std::pair<int,double>(104, 5.5)); // just insert pair to the end
    for (std::map<int, double>::const_iterator cit = m.begin(); cit != m.end();++cit)
        cout << cit->first << " : " << cit->second << endl;


    std::map<int, double>::iterator it = m.emplace_hint(m.end(), pair<int, double>(105, 6.6));
    cout << it->first << " ; " << it->second << endl;
    */


    // key_comp(); compare keys in map
    /*
    std::map<char,int> mymap;

    std::map<char,int>::key_compare mycomp = mymap.key_comp();

    mymap['p']=100;
    mymap['a']=200;
    mymap['b']=300;

    std::cout << "mymap contains:\n";

    char highest = mymap.rbegin()->first;     // key value of last element

    std::map<char,int>::iterator it = mymap.begin();
    do {
        std::cout << it->first << " => " << it->second << '\n'; // output: a b p
    } while ( mycomp((*it++).first, highest) );
    */


    // lower_bound();  return first element from map which equal or greater
    /*
    map<int, int> my_map = {{100, 1}, {105, 16}, {666, 66}};
    const map<int, int>::iterator it = my_map.lower_bound(103);
    cout << it->first << " ; " << it->second << endl; // output: {105, 16}
    */

    // upper_bound();
    /*
    map<int, int> my_map2 = {{100, 1}, {90, 2}, {91, 3}, {1980, 3}, {1004, 4}, {1150, 9}};
    auto it1 = my_map2.upper_bound(102);
    std::cout << it1->first << " == " << it1->second << endl;
    */



    // key_comp(); my proper version
    /*
    map<int, double> employees;
    employees.insert(std::pair<int, double>(700, 3.3));
    employees.insert(std::pair<int, double>(155, 6.3));
    employees.insert(std::pair<int, double>(203, 5.3));
    employees.insert(std::pair<int, double>(179, 6.3));
    employees.insert(std::pair<int, double>(183, 6.3));
    employees.insert(std::pair<int, double>(180, 6.3));
    employees.insert(std::pair<int, double>(190, 6.3));

    map<int, double>::key_compare key_comp = employees.key_comp();
    map<int, double>::iterator it = employees.begin();
    for (int i = 0; i < employees.size(); ++i) {
        if (!key_comp(it->first, 190)) {
            cout<<"============== We went inside if loop... ==================";
            cout << "Key: " << it->first << ". Value: " << it->second << endl;
            break;
        }
        cout<<"Out of if loop.... Key value: "<<  it->first<<endl;
        ++it;
    }
    */




    //key_comp(); compare keys
    /*
    std::map<char,int> mymap;

    std::map<char,int>::key_compare mycomp = mymap.key_comp();

    mymap['d']=100;
    mymap['e']=200;
    mymap['c']=300;
    mymap['b']=300;
    mymap['a']=400;

    std::cout << "mymap contains:\n";

    char highest = (mymap.rbegin()) ->first;     // key value of last element

    std::map<char,int>::iterator ite = mymap.begin();
    do {
        std::cout << ite->first << " => " << ite->second << '\n';
    } while ( mycomp((*ite++).first, highest) );
    std::cout << '\n';
    */



    // lower_bound(); upper_bound(); erase(low, high);
    /*
    map<int, double> employees;
    employees.insert(pair<int, double>(1, 0.4));
    employees.insert(pair<int, double>(2, 4.7));
    employees.insert(pair<int, double>(3, 2.4));
    employees.insert(pair<int, double>(4, 8.7));
    employees.insert(pair<int, double>(5, 8.7));
    employees.insert(pair<int, double>(6, 8.7));
    employees.insert(pair<int, double>(7, 8.7));
    employees.insert(pair<int, double>(8, 8.7));
    employees.insert(pair<int, double>(9, 8.7));
    employees.insert(pair<int, double>(10, 8.7));
    employees.insert(pair<int, double>(11, 8.7));

    auto low = employees.lower_bound(3); //
    auto high = employees.upper_bound(9);

    cout << low->first << " ... "<< low->second<< endl;
    employees.erase(low, high); // output keys: 1 2 10 11, rest will be removes
    for (auto cit = employees.cbegin(); cit != employees.cend(); ++cit) cout << cit->first << " : " << cit->second << endl;
    */


    // value_comp();
    /*
    std::map<int, double> employee;
    employee.insert(std::pair<int,double>(100, 73.5));
    employee.insert(std::pair<int,double>(101, 14.5));
    employee.insert(std::pair<int,double>(102, 40.5));
    employee.insert(std::pair<int,double>(103, 4.5));
    employee.insert(std::pair<int,double>(104, 78.5));
    employee.insert(std::pair<int,double>(1005, 23.5));

    map<int, double>::value_compare val_comp = employee.value_comp();
    map<int, double>::iterator it = employee.begin();
    while (val_comp(*it, pair<int, double>(1005, 73.5))) {
        cout << "NO MATCH -> key: " << it->first << ". value: " << it->second << endl;
    ++it;
    }
    cout << "======= MATCH -> key: " << it->first << ". Value: " << it->second << "=======" << endl;
    */










    return 0;
}