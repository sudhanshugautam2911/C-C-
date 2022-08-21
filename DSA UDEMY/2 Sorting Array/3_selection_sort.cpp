#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{

    int smallest_element = 0;

    // number of passes
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        // find minimum
        // j is 1 element ahead of min or i
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        // swap outside the loop
        swap(arr[i], arr[min]);
    }
}

int main()
{
    // int arr[] = {7, 4, 10, 8, 3, 1};
    int arr[] = {1, 2, 10, 8, 3};
    int n = sizeof(arr) / sizeof(int);

    selection_sort(arr, n);

    for (auto x : arr)
    {
        cout << x << ", ";
    }
    return 0;
}