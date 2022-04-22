#include <iostream>
using namespace std;

class Name
{
public:
    int age;
    Name(int age)
    {
        this->age = age;
    }
    // personal copy constructor although there exists a default one
    Name(Name &temp) // pass by reference to prevent an infinte loop
    {
        cout << "Copy Constructor called" << endl;
        this->age = temp.age;
    }
};
int main()
{
    Name n(20);
    cout << "Age - " << n.age << endl;
    // COPY Constructor
    Name a(n); // copy of values of n stored in a
    // OR Name a = n;
    // OR a.age = n.age;
    cout << "Age - " << a.age << endl;
}