#include<iostream>
using namespace std;

int main() {

    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum = sum + i;
    }

    //Reverse for loop
    sum = 0;
    for (int i = 10; i >= 1; i--) {
        sum = sum + i;
    }

    //Reverse while loop

    int i = 10;
    sum = 0;
    while (i >= 1) {
        sum = sum + i;
        cout<<i<<" : "<<sum<<'\n';
        i--;
    }



    return 0;
}
