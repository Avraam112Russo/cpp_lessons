#include<iostream>
using namespace std;
int main() {


    /*
    int i = 13;
    int& ii = i;
    // var and ref point to same place in memory with same value
    std::cout << i << " and " << ii << endl;
    i=100;
    std::cout << i << " and " << ii << endl;
    */

    int i2 = 10;
    int* ptr_i = &i2;
    std::cout << "Address from ptr: " << ptr_i << std::endl;
    std::cout << "Address: " << &i2 << std::endl;
    std::cout << "Value: " << i2 << std::endl;
    std::cout << "Value from ptr: " << *ptr_i << std::endl;

    std::cout<<"=============================="<<std::endl;
    /*
    int* ptr2 {nullptr};
    std::cout<<ptr2;
    std::cout<<*ptr2<<endl;
    we get error
     */



    std::cout<<"=============================="<<std::endl;
    double d = 12.5;
    int s = 100;
    std::string msg = "Hola";

    double* ptr_d = &d;
    int* ptr_s = &s;
    string* ptr_msg = &msg;

    std::cout << "Size of double pouinter: " << sizeof(&d) <<endl;
    std::cout << "Size of int pouinter: " << sizeof(&s) <<endl;
    std::cout << "Size of string pouinter: " << sizeof(&msg) <<endl;

    std::cout << "Size of ptr_d: " << sizeof(ptr_d) <<endl;
    std::cout << "Size of ptr_s: " << sizeof(ptr_s) <<endl;
    std::cout << "Size of ptr_msgr: " << sizeof(ptr_msg) <<endl;

    std::cout<<"=============================="<<std::endl;
    char* ptr_message = "Hello, world";
    std::cout << "Address ptr_message: " << &ptr_message << endl;
    std::cout << "Value ptr_message: " << *ptr_message << endl;

    char message [5] = {"Hola"};
    message[0] = 'T';
    std::cout << message << endl;


    std::cout<<"=============================="<<std::endl;
    int i22 = 10; //  stack
    int* ptr = &i22; // stack
    int* b = nullptr; // heap
    b = new int; // heap
    *b = 100;
    std::cout<<*b<<endl;
    delete b;
    b=nullptr;
    std::cout<<"=============================="<<std::endl;
    int* ptr33 = nullptr; // ptr doesn't point on any space memory
    std::cout << "Address: " << ptr33 << endl;
    ptr33 = new int; // ptr does point on space memory which have 4 byte
    *ptr33 = 777;
    std::cout << "Address: " << ptr33 << endl;
    std::cout << "Value: " << *ptr33 << endl;
    delete ptr33;
    ptr33 = nullptr;
    std::cout<<"=============================="<<std::endl;
    int* ptrr = nullptr;
    ptrr = new int{77};
    std::cout << "Value ptrr: " << *ptrr <<endl;
    std::cout << "Address ptrr: " << ptrr <<endl;
    delete ptrr;
    std::cout<<"=============================="<<std::endl;


    // stack<int> mystack;
    // mystack.push(10);
    // mystack.push(11);
    // mystack.push(12);
    // if (!mystack.empty()) std::cout << "Output should be 12: -> " << mystack.top();
    // std::system("pause");

    /*
    int* ptr = nullptr;
    ptr = new int;
    *ptr = 666;

    std::cout << "Address: " << ptr << endl;
    std::cout << "Value: " << *ptr << endl;

    delete ptr;
    ptr=nullptr;

    ptr = new int{777};

    std::cout << "Address: " << ptr << endl;
    std::cout << "Value: " << *ptr << endl;

    delete ptr;
    ptr=nullptr;
    */

    /*
    int* ptr = nullptr;
    ptr=new int;
    *ptr = 77;
    std::cout<<"Address: "<<ptr<<endl;
    std::cout<<"Value: "<<*ptr<<endl;
    std::cout<<"Message after ptr"<<endl;
    delete ptr;
    ptr=nullptr;
    */

    /*
    double* d = nullptr;
    d = new double;
    *d = 77777;
    std::cout << "address: "<<d<<endl;
    std::cout << "value: "<<*d<<endl;
    delete d;
    d=nullptr;

    d=new double;
    *d=666;
    std::cout << "new address: "<<d<<endl;
    std::cout << "new value: "<<*d<<endl;
    delete d;
    d=nullptr;
    */

    /*
    int* ptr {new int{7777}};
    std::cout << "new address: "<<ptr<<endl;
    std::cout << "new value: "<<*ptr<<endl;
    delete ptr;
    ptr=nullptr;
    */

    /*
    int* ptr = nullptr;
    ptr = new int;
    *ptr = 777;
    int* ptr2 = nullptr;
    ptr2=ptr;
    std::cout << "address ptr: "<<ptr<<endl;
    std::cout << "value ptr: "<<*ptr<<endl;
    std::cout << "====================="<<endl;
    std::cout << "address ptr2: "<<ptr2<<endl;
    std::cout << "value ptr2: "<<*ptr2<<endl;
    delete ptr;
    */


    /*
  for (unsigned int i = 0; i < 1000000000; i++) {
      int* ptr {new(std::nothrow) int[1000000000]};
      if (ptr == nullptr) {
          std::cout << "Program error..." << endl;;
          break;
      } else {
          std::cout << "Program success work...";
      }
  }
  std::cout << "Program exit from for loop...";
  */

    /*
    for (int i =0; i < 100000000; i++) {
        try {
            int* ptr = nullptr;
            ptr = new int[10000000000000];
            std::cout<<"Allocatted memory succeess"<<endl;
            delete ptr;
            ptr = nullptr;
        }catch (std::exception& exception) {
            std::cout << "Something went wrong: " << exception.what() << endl;
            break;
        }
    }
        std::cout << "Program ends well!" << endl;
    */


    /*
    int i = 100;
    int* ptr = nullptr;
    // ptr = new int;
    // *ptr = i;
    if (ptr == nullptr) {
        std::cout << "Calling null ptr";
    } else {
        std::cout << "Ptr work well";
    }
    delete ptr;
    ptr=nullptr;
    */

    return 0;
}