#include <iostream>
using namespace std;

void update(int r)
{ // pass by value
    r++;
}
void update2(int &r)
{ // pass by reference
    r++;
}

int main()
{
    int i = 5;
    int &j = i; // j is reference variable of i
    cout << i << endl;
    update(i);
    cout << i << endl;
    update2(i);
    cout << i << endl;
}