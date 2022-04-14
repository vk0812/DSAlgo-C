#include <iostream>
#include <deque>
using namespace std;

int main()
{
    // Doubly Ended Queue
    // can be used to access elements both from front and back
    deque<int> d;
    d.push_back(1);  // from back means from end side
    d.push_front(2); // from front means from start side
    // therefore d is {2,1}
    for (int i : d)
    {
        cout << i << " ";
    }

    // similarly d.pop_back() and d.pop_front()
    // d.at() also works
    // d.front() and d.back() also works
    // d.empty also works

    // d.erase(range) to remove elements within the range
}