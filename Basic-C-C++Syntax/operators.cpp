///Topic: Operators

#include<iostream>
using namespace std;

int main() {

    ///Unary operator : ++, --
    ///c = a++, first assign the value of a, then increment a
    ///c = ++a first increment the value of a, then assign it to c
    ///d = b-- first assign the value of b, then decrement
    ///d = --b first decrement the value of b, then assign it to d

    int a=5, b=5, c, d;
    c = ++a;
    d = b--;
    cout<<"A : "<<a<<endl;
    cout<<"B : "<<b<<endl;
    cout<<"C : "<<c<<endl;
    cout<<"D : "<<d<<endl;

    ///Binary Operator [Arithmetic]: +, -, *, /, %
    int x = 22, y = 4 , i, j;
    i = x % y;
    j = y % x;
    cout<<"Remaider of x : "<<i<<endl;
    cout<<"Remaider of y : "<<j<<endl;

    ///Bitwise operation : and (&), or(|) , xor(^)
    x = 2; y = 3;
    cout<<"And value of X and Y : "<< (x & y) <<endl;
    cout<<"Or  value of X and Y : "<< (x | y)<<endl;
    cout<<"Xor value of X and Y : "<< (x ^ y) <<endl;



    return 0;
}
