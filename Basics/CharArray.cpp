#include <iostream>
using namespace std;

int main()
{
    // Character Arrays in C++ end with a \0 (null character)
    // Therefore we always declare an a[n+1] for n characters
    char a[100] = "Vidit";
    int i = 0;
    while (a[i] != '\0')
    {
        cout << a[i] << endl;
        i++;
    }
}