// Left Shift Operator - a<<b - Binary form of a*(2^b)
// Right Shift Operator - a>>b - Binary form of a/(2^b)
#include <iostream>
using namespace std;

int getBit(int n, int pos)
{
    // Get Bit at pos = 2 for 5(0101) - answer is 1
    int pos_bin = 1 << pos; // 1 only at pos position rest all zero
    int a = n & pos_bin;    // if you get any number other than 0 then there was 1 bit at the position
    // cout << pos_bin << endl;
    // cout << a << endl;
    if (a != 0)
    {
        return 1;
    }
    return 0;
}

int setBit(int n, int pos)
{
    // Set bit means putting 1 bit that position
    // Unsetting bit means putting 0 bit at that position
    // 5(0101) pos = 1 - 7(0111)
    int pos_bin = 1 << pos;
    int a = n | pos_bin;
    return a;
}

int clearBit(int n, int pos)
{
    int pos_bin = 1 << pos;
    int inv_pos_bin = ~pos_bin;
    int a = n & inv_pos_bin;
    return a;
}

int updateBit(int n, int pos, int ut)
{
    // Update bit for n at position to ut
    // 5(0101),3,1 - 13(1101)
    // Basically clearBit + setBit
    int b = n & (~(1 << pos));
    int a = b | (ut << pos);
    return a;
}

int main()
{
    cout << getBit(5, 2) << endl;
    cout << setBit(5, 1) << endl;
    cout << clearBit(5, 0) << endl;
    cout << updateBit(5, 3, 1) << endl;
}