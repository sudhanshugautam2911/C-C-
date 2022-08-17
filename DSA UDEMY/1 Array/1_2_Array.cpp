#include<iostream>
using namespace std;

int main() {
    int marks[100];

    int n;
    cout<< "Enter the no. of students " << endl;
    cin >> n;

    // assign a value
    marks[0] = -1;


    // input
    for (int i = 1; i <= n; i++)
    {
        cin >> marks[i];

        // update
        marks[i] = marks[i]*2;
    }
    
    // output
    for (int i = 1; i <= n; i++)
    {
        cout << marks[i] << ", " ;
    }
    cout << marks[0] << ", " << marks[5] << endl;

    return 0;
}