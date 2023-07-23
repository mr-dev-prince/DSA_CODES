// XOR operator - a^a=0 / 0^a = a

#include <iostream>
using namespace std;

int uniqueElementInArray(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

int main()
{
    int arr[10] = {1, 3, 9, 3, 1, 2, 1, 4, 2, 4};

    cout << uniqueElementInArray(arr, 5);
    return 0;
}