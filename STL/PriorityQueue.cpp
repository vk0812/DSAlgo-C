#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // max heap - max element first
    priority_queue<int> maxi;
    // min heap - min element first
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    int size_max = maxi.size();
    for (int i = 0; i < size_max; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;
    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);

    int size_min = mini.size();
    for (int i = 0; i < size_min; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;
}