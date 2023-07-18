#include<iostream>
using namespace std;

int main() {

    int sum = 0;
    /*for (int i = 1; i <= 10; i++) {
        sum = sum + i;
    }*/

    int i = 1;
    while (i <= 10) {
        sum = sum + i;
        cout<<i<<" : "<<sum<<'\n';
        i++;

    }


    return 0;
}
