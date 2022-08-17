#include<iostream>
using namespace std;

// Question 1
int Sum(int n) {

    if (n==0)
    {
        return 0;
    }
   
    int prevSum =  Sum(n-1);
    // cout << prevSum << endl;
    return n + prevSum;
}

// Question 2
int power(int n, int p) {
    if (p==0)
    {
        return 1;
    }
    
    int prevPower = power(n, p-1);
    cout << prevPower << endl;
    return n*prevPower;
}

// Question 3
int fact(int n) {
    if (n==0)
    {
        return 1;
    }
    

    int prevFact = fact(n-1);

    return n*prevFact;
    // return n*fact(n-1);
}

// Question 4
int fib(int n) {
    if (n==0 || n==1)   
    {
        return n;
    }
    
    // int prevFib = fib(n-1) + fib(n-2);
    // return prevFib;

    return fib(n-1) + fib(n-2);
}


int main() {
    int n;
    // int p;   // for Q2

    cin >> n;
    // cin >> p;  // for Q2

    // cout << Sum(n) << endl;
    // cout << power(n, p) << endl;
    // cout << fact(n) << endl;
    cout << fib(n);

    return 0;
}