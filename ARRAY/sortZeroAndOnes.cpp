#include <iostream>
using namespace std;

int sortZeroAndOnes(int arr[], int n)
{

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        while (arr[i] == 0 && i < j)
            i++;
        while (arr[j] == 1 && i < j)
            j--;

        swap(arr[i], arr[j]);
        i++;
        j--;
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

    int arr[10] = {0, 1, 1, 0, 1, 1, 0, 1, 1, 1};

    sortZeroAndOnes(arr, 10);
    printArray(arr, 10);

    return 0;
}