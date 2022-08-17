#include<iostream>
using namespace std;

// Question 1*
bool sorted(int arr[], int n) {

    if (n==1)
    {
        return true;
    }
    
    bool resetArray = sorted(arr +1, n-1);

    return arr[0] < arr[1] && resetArray;
}

// Question 2
void dec(int n) {
    if (n==0)
    {
        return;
    }
    
    cout << n << endl;
    dec(n-1);
}


// Question 3*

// void inc(int n) {
//     if (n==1)
//     {
//         cout<< 1 << endl;
//         return;
//     }
//     inc(n-1);
//     cout << n << endl;

// }


int main() {
    int n;

    // int arr[] = {1,2,3,4,5};  // Q1
    // cout << sorted(arr,5);
    
    cin >> n;  //Q2
    dec(n);

    // cin >> n; // Q3
    // inc(n); 

    return 0;
}