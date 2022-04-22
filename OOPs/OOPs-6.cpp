#include <iostream>
using namespace std;

// See Inheritance Table from base class to child class
class Human // parent/super/base class
{
public:
    int height;
    int weight;
    int age;

    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};

class Male : public Human // child/sub/derived class
{
public:
    string name = "name";
};

int main()
{
    Male m1;
    cout << "Age of Male - " << m1.age << endl;
    cout << "Weight of Male - " << m1.weight << endl;
    cout << "Height of Male - " << m1.height << endl;
    cout << "Name of Male - " << m1.name << endl;
}