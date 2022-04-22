#include <iostream>
using namespace std;

class Name
{
public:
    int age;

    Name()
    {
        cout << "Constructor Called" << endl;
    }

    Name(int age) // parametrised constructor
    {
        // this keyword basically stores the address of the current object
        cout << "Address of this - " << this << endl;
        this->age = age;
    }
};

int main()
{
    // constructor always called during object creation
    // default constructor called if none given
    // once you write your own constructor the default constructor dies immediately
    Name n(20);
    // Name *a = new Name(20); // in case dynamically
    cout << "Address of object - " << &n << endl;
    cout << "Age - " << n.age << endl;
}