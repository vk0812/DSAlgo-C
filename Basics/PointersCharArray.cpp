#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    char c[6] = "Vidit";
    // null character at the end
    cout << "Address of First Element of the Array - " << a << endl;
    // although incase of int array address of first element printed
    cout << "Character Array - " << c << endl;
    // in case of char array enter array printed

    char *ch = &c[0];
    cout << "Character Array - " << ch << endl;
    // although should have printed address of first character but prints entire array
    cout << "First Letter of Character Array - " << *ch << endl;

    char temp = 'v';
    char *ptr = &temp;
    cout << "Keeps on Printing Random Values till it finds null character - " << ptr << endl;
    // Try commenting out char array (a) and then print
}