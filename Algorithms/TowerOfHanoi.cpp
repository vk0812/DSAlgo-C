#include <iostream>
#include <string>
using namespace std;

void towerofhanoi(int n, string org, string helper, string fin)
{
    if (n == 0)
    {
        return;
    }
    towerofhanoi(n - 1, org, fin, helper);
    cout << "Move from " << org << " to " << fin << endl;
    towerofhanoi(n - 1, helper, org, fin);
}

int main()
{
    towerofhanoi(3, "A", "B", "C");
}