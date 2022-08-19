#include<iostream>
using namespace std;

int linear_search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        // check if current element match with our key
        if (arr[i] == key)
        {
            return i;
        }
        
    }
    return -1;
    
}

int main()
{
    int arr[] = {1,0,3,5,6,8,9,23};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cout << "Enter your key" << endl;
    cin >> key;

    
    int index = linear_search(arr, n, key);
    if (index != -1)
    {
        cout << key << " is present at index " << index << endl;
    } else {
            cout << key << " is not found!";
    }
    

    return 0;
}
