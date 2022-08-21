#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{


    // Number of times
    for (int times = 0; times < n; times++)
    {
        for (int j = 0; j < n - times; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    
    bubble_sort(arr, n);

    for (auto x : arr) {
        cout << x << ", ";
    }

    return 0;
}