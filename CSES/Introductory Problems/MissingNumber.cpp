#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long int n;
    long long int a;
    int ans = 0;
    cin >> n;
    vector<int> input(n + 1, 0);
    for (int i = 1; i < n; i++)
    {
        cin >> a;
        input[a] = 1;
    }
    for (int i = 1; i < n + 1; i++)
    {
        if (input[i] == 0)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}