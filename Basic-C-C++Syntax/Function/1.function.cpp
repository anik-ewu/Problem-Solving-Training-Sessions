///Function : Add two values

#include<iostream>
using namespace std;

int add(int x, int y) {

    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;

    int sum = x+y;
    return sum;
}

int main() {

    int a = 5;
    int b = 10;

    int sum = add(a, b);

    cout<<sum<<endl;

    return 0;
}
