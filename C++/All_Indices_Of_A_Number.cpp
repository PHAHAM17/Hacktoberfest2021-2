
#include <iostream>
using namespace std;

int allIndexes(int input[], int size, int x, int output[])
{
    if (size == 0)
    {
        return 0;
    }
    int smallnumber = allIndexes(input + 1, size - 1, x, output);
    if (input[size - 1] == x)
    {
        output[smallnumber] = size-1;
        return smallnumber+1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int size, x;
    cin >> size;
    int input[10], output[10];
    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }
    cin >> x;
    cout << allIndexes(input, size, x, output);
    return 0;
}
