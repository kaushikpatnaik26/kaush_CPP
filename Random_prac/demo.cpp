#include <iostream>
using namespace std;
void func1() {
    int x = 100 ;
    cout << x << endl ;
}
int x = 10;
int y = 30;


int main() {
    func1();
    cout << x << endl;
    cout << y << endl;
    return 0;
}
//hence local and global var can have same variable name 