#include <iostream>
using namespace std
#include <cstring>  

int main() {
    char a[50];
    cout << "Enter a string : ";
    cin >> a;
    cout << "Reverse of String: " ;
    for (int i = strlen(a) - 1; i >= 0; i--) {
        cout << a[i]; 
    }
    cout << endl; 
}
