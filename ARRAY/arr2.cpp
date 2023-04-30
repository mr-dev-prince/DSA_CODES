#include <bits/stdc++.h>
using namespace std;

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printArr(int arr[], int size)
{
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int evenArr[6] = {2, 3, 5, 6, 7, 9};
    int oddArr[6] = {2, 3, 5, 6, 7};

    swapAlternate(evenArr, 6);
    swapAlternate(oddArr, 5);
    printArr(evenArr, 6);
    printArr(oddArr, 5);

        return 0;
}