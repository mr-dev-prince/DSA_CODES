// find the sum of all the elements in the array

#include <iostream>
using namespace std;

int sumArray(int arr[], int n)
{
    int sum = 0;
    for (int i=0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
};

int main()
{
    cout << "enter the size of the array : ";
    int size;
    cin >> size;

    int arr[50];

    for (int i=0; i < size; i++)
    {
        cout << "Enter the " << i << " element: ";
        cin >> arr[i];
    };

    int sum = sumArray(arr, size);

    cout << sum;

    return 0;
}