#include<iostream>
using namespace std;

//  Problem : Find Largest subArray

// Brute force approch O( N^3 )
int largestSubArraySum1(int arr[], int n){

    int largest_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                // cout << arr[k] << ",";
                sum = sum + arr[k];

            }
            
            largest_sum = max(largest_sum, sum); 

        }
    }
    
    return largest_sum;
}

// prefix sum approch O( N^2) 
int largestSubArraySum2(int arr[], int n){

    int prefix[100] = {0};
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i-1] + arr[i];

    }
    
    // Largest Sum login
    int largest_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = i>0 ? prefix[j] - prefix[i-1] : prefix[j]; // used ternary operator
            largest_sum = max(largest_sum, sum); 

        }
    }
    
    return largest_sum;
}

int main() {
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);

    cout << " Brute force Approch :" <<largestSubArraySum1(arr, n) << endl;
    cout << " Prefix Sums :" << largestSubArraySum2(arr, n) << endl;

    return 0;

}