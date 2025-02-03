#include <iostream>
using namespace std;

void example()
{
    int global = 20;

    cout << global << endl;
}
int main()
{
    int global = 21;
    cout << global << endl;

    global = 24;
    cout << global << endl;

    example();
    return 0;
    //global and local variable can have the same name but when updating or accesing.. the Local variable will always have more precidence
}