#include <iostream>
using namespace std;

void count_sort(int arr[], int n)
{

    int k = -1;
    for (int i = 0; i < n; i++)
    {
        k = max(k,arr[i]);
    }
    cout << "max is " << k <<endl;

    int count[k];
    int b[n];
     

    // Initialize count array with all zeros.
    for (int i = 0; i <= k; ++i)
    {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;     // 1. count array
    }

    for (int i = 1; i <= k; i++)
    {
        count[i] = count[i] + count[i - 1]; // 2. modify count array
    }

    for (int i = n - 1; i >= 0; i--) // 3. lets make our final sorted array
    {
        b[--count[arr[i]]] = arr[i];
    }

    // copy array b content in our main arr
    for (int i = 0; i < n; i++)
    {
        arr[i] = b[i];
    }
}

int main()
{
    int arr[] = {1, 4, 1, 2, 7, 5, 2};
    int n = sizeof(arr) / sizeof(int);

    count_sort(arr, n);

    for (auto x : arr)
    {
        cout << x << ", ";
    }
    

    return 0;
}