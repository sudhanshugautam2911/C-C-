#include <iostream>
#include<vector>
using namespace std;

int main() {
    // Demo vector
    // vector<int> arr = {1,2,3,4,5};

    // fill constructor
    vector<int> arr(10,7);   // 10 elements and each with value 7

    // fill  constructor
    vector<int> visited(000,0);

    // pop back remove last element
    arr.pop_back();
    

    // push_back 0(1)
    arr.push_back(16);  // vector is full so its capcity will be doubled


    // size of vector (number of elements)
    cout << arr.size() << endl;

    // capacity of the vector
    cout << arr.capacity() << endl;


    // print all the elements of the vector
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
    
    
    return 0;

}

