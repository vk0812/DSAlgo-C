#include <iostream>
using namespace std;

// class creation
class Name
{
private:        // default access modifier is private
    int number; // cannot be accessed outside class since private

public:
    int age;
};

int main()
{
    // object creation
    Name a;

    cout << "Size - " << sizeof(a) << endl; // total size of all properties
    // in case zero properties then size = 1 (just for identification)

    cout << "Age - " << a.age << endl;
}