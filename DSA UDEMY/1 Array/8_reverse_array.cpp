#include<iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int s = 0;
    int e = n-1;

    while (s < e)
    {
        swap(arr[s], arr[e]);
        s += 1;
        e -= 1;
    }
    

}

int main() {
    int arr[] = {1,3,5,6,8,9,23};
    int n = sizeof(arr)/sizeof(int);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // reverse
    reverseArray(arr, n);

    // Print the output
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
    
}