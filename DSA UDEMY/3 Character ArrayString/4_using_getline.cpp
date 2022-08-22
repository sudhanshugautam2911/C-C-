#include<iostream>
using namespace std;

int main() {
    char paragraph[1000];
    
    // we will use cin.getline method but we should also know about cin.get.
    cin.getline(paragraph,1000, '\n');  // we can use any keyword to stop out input like . # & anthing.
                                       // \n means next line , endl do the same work so in our input we dont need to use \n to stop our input.
    cout << paragraph << endl;
}