#include <iostream>
using namespace std;

class Name
{
public:
    int age;
};
int main()
{
    Name n; // static allocation

    Name *a = new Name; // dynamic allocation

    (*a).age = 20; // brackets around (*a) necessary
    cout << "Age - " << (*a).age << endl;
    // OR
    a->age = 30; // another way of doing the above thing
    cout << "Age - " << a->age << endl;
}