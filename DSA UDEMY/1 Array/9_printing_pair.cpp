#include<iostream>
using namespace std;

void printing_pairs(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];

        for (int j = i+1; j < n; j++)  // also, if j=0 then all possible combinations will be printed
        {
            int y = arr[j];
            cout << x << ", " << y << endl;
        }
        cout << endl;
    }
    
    
}

int main() {
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);

    // for (int x : arr)
    // {
    //     cout << x << " ";
    // }

    printing_pairs(arr , n);

    return 0;

}