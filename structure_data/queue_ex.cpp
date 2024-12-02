#include<iostream>
#include<queue>

using namespace std;


class myprodd {
public:
    myprodd() {
        cout << "myprodd object created.." << endl;
    }
    ~myprodd() {
        cout << "myprodd object destroy.." << endl;
    }
};
int main() {

    //queue - FIFO. First in - first out.



    // back(); Returns a reference to the last element in the queue. This is the "newest" element in the queue
    /*
    std::queue<int> my_queue; // 300 200 100
    my_queue.push(100);
    my_queue.push(200);
    my_queue.push(300);

    cout << my_queue.back() << endl; // output: 300
    */


    //emplace(); create element right in args and insert at the end queue.
    /*
    std::queue<int> my_queue;
    my_queue.emplace(1000);
    my_queue.emplace(1001);
    my_queue.emplace(1002);
    std::cout << my_queue.front() << endl; // output: 1000
    */

    // empty();
    /*
    std::queue<int> q;
    q.push(100); // add new element
    q.pop(); // remove it
    if (q.empty()) cout<<"Queue is empty..."<<endl;
    else cout<<"Queue contains some elements.."<<endl;
    */


    // front(); Returns a reference to the next element in the queue.The next element is the "oldest" element in the queue
    /*
    std::queue<int> q;
    q.push(100);
    q.push(101);
    q.push(102);
    std::cout << q.front() << endl; // output: 100
    */

    // The element removed is the "oldest" element in the queue // queue - FIFO
    /*
    std::queue<int> q;
    q.push(100);
    q.push(200);
    q.push(300);

    q.pop(); // remove 100
    q.pop(); // remove 200

    cout << q.front(); // output: 300
    */


    // push(); add new element to the end queue
    /*
    std::queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    // queue - 3 2 1 , 1 is a front now
    cout << q.front();
    */


    /*
    std::queue<int>q;
    q.push(300);
    q.push(300);
    q.push(300);
    q.push(300);
    std::cout << q.size() << endl; // output: 3
    */






    return 0;
}
