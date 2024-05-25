//a program to do something anyone can do in seconds but again why not?

#include <iostream>
using namespace std;

int main (){ 
    int n; 
    cout << "Enter your integer" << endl; 
    cin >> n; 

    if (n%2 == 0) { 
        cout << n << " is even" << endl;
    }else {
        cout << n <<" is odd"<< endl; 
    }
    return 0;
}