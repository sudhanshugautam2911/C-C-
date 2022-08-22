#include <iostream>
#include<algorithm>
using namespace std;

int compare(int a, int b) {
    // cout << "comparing " << a << " and " << b<< endl;
    return a > b;  // reverse ( descending)
    // return a < b; // ascending
}

int main() {
    int arr[] = {10,3,9,18,12,5,73};
    int n = sizeof(arr)/sizeof(int);

    //  start from array to end of the array
    sort(arr, arr + n, compare);
    // reverse(arr, arr+n);

    // inbuilt comparitor object
    // sort(arr, arr + n, greater<int>());
    
    

    for (int x : arr) {
        cout << x << endl;
    }
    
    return 0;
}