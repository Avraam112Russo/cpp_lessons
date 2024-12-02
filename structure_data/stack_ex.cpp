#include <iostream>
#include <list>
#include <stack>
#include <vector>

using namespace std;
int main() {

    /*
    std::stack<int> my_stack;// top [ 400 300 200 100 ] bottom

    my_stack.push(100);
    my_stack.push(200);
    my_stack.push(300);
    my_stack.push(400);

    std::cout << my_stack.top() << endl;; // output: 400
    my_stack.pop();// remove top -> remove 400
    std::cout << my_stack.top() << endl; // output: 300
    my_stack.emplace(666);
    if (my_stack.empty()) cout << "Stack is empty..."<< endl;
    else cout << "In stack we have " << my_stack.size() << " elements." << endl;


    std::stack<int> new_stack;
    new_stack.push(1);
    new_stack.push(2);
    my_stack.swap(new_stack); // exchange contents between two stacks
    */

    std::vector<int> v;
    v.push_back(111);
    v.push_back(112);
    v.push_back(113);
    v.push_back(114);
    v.push_back(115);
    std::vector<int>::iterator it = v.begin();
    for (; it != v.end(); ++it) {
        cout << *it << endl;
        if (*it == 114) break;
    }
    std::cout <<"Capacity: " << v.capacity() << endl;
    std::cout << "MOCK" << endl;
    std::cout << "MOCK" << endl;
    std::cout << "MOCK" << endl;
    cout << *it << endl;
    v.push_back(115);
    v.push_back(116);
    // v.push_back(113);
    // v.push_back(114);
    // v.push_back(115);
    std::cout <<"Capacity: " << v.capacity() << endl;
    cout << *it << endl;

    v.push_back(117);
    v.push_back(118);
    v.push_back(119);
    v.push_back(120);
    v.push_back(121);
    std::cout <<"Capacity: " << v.capacity() << endl;
    cout << *it << endl;
    return 0;
}
