#include<iostream>
using namespace std;

int main(){
    int i = 4; // 4 bytes
    // int default is signed to increase range use unsigned int
    // long int for 8 bytes for long range
    // short int for 2 bytes for short range
    bool b = true; // 1 byte
    float f = 3.5; // 4 bytes
    double d = 25.63; // 8 bytes
    char c = 'a'; // 1 byte
    cout << i << endl;
    cout << b << endl;
    cout << f << endl;
    cout << d << endl;
    cout << c << endl;
    cout << "Size of int: "<< sizeof(i) << endl; // can be used to find size of any data type in bytes
}