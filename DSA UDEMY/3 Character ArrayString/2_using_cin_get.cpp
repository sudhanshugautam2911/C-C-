#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char sentance[1000];
    char temp = cin.get();  // reads from the input buffer

    int len = 1;
    // we can stop at any value like instead of \n, we can use #, a, etc.
    while( temp != '\n') {   
        len++;
        cout << temp;
        
        // update the value of temp
        temp = cin.get();
    }

    cout << endl <<" length = " << len << endl;
    
}