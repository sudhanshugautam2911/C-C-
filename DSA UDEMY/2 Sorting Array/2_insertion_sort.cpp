#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        //  arr[j] is our sorted with which we are comparing
        //  arr[j+1] is our temp element.
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int arr[] = {5, 4, 10, 1, 6, 2};
    int n = sizeof(arr) / sizeof(int);

    insertion_sort(arr, n);

    for (auto x : arr)
    {
        cout << x << ", ";
    }
    return 0;
}