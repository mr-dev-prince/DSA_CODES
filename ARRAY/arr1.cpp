#include <bits/stdc++.h>
using namespace std;

void reverseArr(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
}

int main()
{
    // program to reverse an array

    int size;
    cout << "Enter the size of the array (<100) : " << endl;
    cin >> size;

    int arr[100];

    for (int i = 0; i < size; i++)
    {
        int num;
        cout << "Enter the number at " << i << " index :";
        cin >> num;
        arr[i] = num;
    }

    // int arr[7]={1,2,3,4,5,6,7};
    printArr(arr, size);

    reverseArr(arr, size);
    printArr(arr, size);

    return 0;
}