#include <iostream>
using namespace std;

int main()
{
    // Dynamic 2D Array
    int rows, cols;
    cin >> rows >> cols;
    // creating dynamic 2D array
    int **a = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        a[i] = new int[cols];
    }

    // taking input
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> a[i][j];
        }
    }

    // showing output
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory
    for (int i = 0; i < rows; i++)
    {
        delete[] a[i];
    }
    delete[] a;
}