#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int start = 0, end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 0, 9, 8, 7, 6};

    reverseArray(arr, 10);

    printArray(arr, 10);

    return 0;
}