#include<iostream>
using namespace std;

int main(){
    int a = 20;
    int *b = &a;
    cout <<"the address of a is: " <<b;
    cout <<"\nAnd the value of it using deference is : " <<*b;
    int x;
    cout << "\nenter a integer: " ;
    cin >> x;
    cout <<"The entered int address is: "<<&x;
    cout <<"\nThe entered int val is: "<<x;


}