#include<iostream>
#include<cstring>
using namespace std;

int main() {
    // char a[] = {'a', 'b', 'd', 'c','\0'};  // try without 0

    char a[] = "abcdefgh";

    char b[100];
    cin >> b;         // input as helloworld but cant like hello world (will solve this in the next lecture)
    cout << b << endl;  
    
    cout << a << endl;

    cout << strlen(a) << endl;  // no. of character
    cout << sizeof(a) << endl; // +1 because of null character we
    
}