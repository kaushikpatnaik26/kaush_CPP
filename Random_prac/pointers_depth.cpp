#include<iostream>
using namespace std;
int main()
{
    cout << "" << endl;
    cout << "" << endl;
    int a =20;
    int* b = &a;

    //double pointer
    int** c = &b;

    //triple pointer
    int*** d = &c;
    cout <<"The adress of C stored in d: " <<d << endl;
    cout << "the adress of C printed directly: "<< &c << endl;
    cout << "The value of A using triple pointer: "<< ***d << endl;

    cout<<"Printing adress of a using '&' operator is: " << &a << endl;
    cout<<"Printing dress of a stored in a pointer variable is: " << b << endl;    
    cout <<"Value of a using '*' i.e dereferencing : "<< *b << endl;
    cout <<"The adress of the pointer is usinf '&' : " << &b << endl;
    cout <<"The adress of ptr var using dbl poiunter is : "<<c << endl;
    cout << "THe value c is holding is the adress of a that is stored in b : "<< *c << endl;
    cout << "The value in the adress that c is holding is: "<< **c << endl;
    return 0; 
}
