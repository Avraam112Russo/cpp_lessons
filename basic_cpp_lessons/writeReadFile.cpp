#include<iostream>
#include <Windows.h>
#include<fstream>
using namespace std;
int main() {


    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /*
    string filename{"myfile.txt"};
    ofstream writefile(filename, ios_base::out);
    if (writefile.is_open()){
        writefile<<"9:30 -> new record..."<<endl;
        clog<<"New record created successfully";
        writefile.close();
    }

    ifstream readfile(filename);
    if (readfile.is_open()) {
        char temp[1024];
        readfile.getline(temp,100);
        readfile.close();
        cout<<temp<<endl;
    }
    */

    ofstream writefile("somefile.txt", ios_base::out);
    writefile<<" 'War is peace. Freedom is slavery. Ignorance is strength,'"<<std::endl;
    writefile.close();
    ifstream file("somefile.txt");
    if (file.is_open()) {
        char temp[1024];
        file.getline(temp, 1024);
        cout<<temp<<endl;
        file.close();
    }
    return 0;
}