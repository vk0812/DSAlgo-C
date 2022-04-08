#include <iostream>
using namespace std;

void print(int *ptr)
{
    cout << "Original Number - " << *ptr << endl;
    *ptr = *ptr + 1;
    // ptr = ptr + 1;
    // cout<<"After Change - "<<ptr<<endl;
    cout << "Value After Change - " << *ptr << endl;
}
int main()
{
    int a = 5;
    int *p = &a;
    // cout<<"Before Change - "<<p<<endl;
    print(p);
    cout << "Value After Change - " << a << endl;
    cout << "Value After Change - " << *p << endl;
    // cout<<"After Change - "<<p<<endl;

    // Note if address changed in function then address does not change in the main function
}