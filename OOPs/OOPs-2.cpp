#include <iostream>
using namespace std;

class Name
{
private:
    int age;

public:
    int health;

    int getHealth() // getter
    {
        return health;
    }
    int getAge() // getter
    {
        return age;
    }
    void setHealth(int h) // setter
    {
        health = h;
    }
    void setAge(int num) // setter
    {
        age = num;
    }
};
int main()
{
    Name n;
    n.setAge(50);
    n.health = 70; // since public can be done directly also
    cout << "Age - " << n.getAge() << endl;
    cout << "Health - " << n.getHealth() << endl;
}