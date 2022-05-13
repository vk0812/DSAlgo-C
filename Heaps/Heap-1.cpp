#include <iostream>
using namespace std;

class Heap
{
public:
    int size;
    int arr[100];

    Heap()
    {
        size = 0;
        arr[0] = -1;
    }

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while ((arr[index / 2] < arr[index]) && index > 1)
        {
            int temp = arr[index];
            arr[index] = arr[index / 2];
            arr[index / 2] = temp;
            index = index / 2;
        }
        return;
    }

    void del()
    {
        if (size == 0)
        {
            cout << "Already Empty!" << endl;
            return;
        }
        arr[1] = arr[size];
        size--;
        int i = 1;
        while (i < size)
        {
            int left = 2 * i;
            int right = 2 * i + 1;
            if (left < size && arr[left] > arr[i])
            {
                swap(arr[left], arr[i]);
                i = left;
                continue;
            }
            else if (right < size && arr[right] > arr[i])
            {
                swap(arr[right], arr[i]);
                i = right;
                continue;
            }
            break;
        }
        return;
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

void heapify(int arr[], int size, int i)
{
    int index = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left <= size && arr[left] > arr[index])
        index = left;
    if (right <= size && arr[right] > arr[index])
        index = right;

    if (index != i)
    {
        swap(arr[index], arr[i]);
        heapify(arr, size, index);
    }
    return;
}

int main()
{
    Heap h;
    h.insert(0);
    h.insert(5);
    h.insert(3);
    h.insert(2);
    h.insert(4);
    h.print();
    h.del();
    h.print();

    int arr[6] = {-1, 5, 1, 1, 2, 0};
    int n = 5;
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}