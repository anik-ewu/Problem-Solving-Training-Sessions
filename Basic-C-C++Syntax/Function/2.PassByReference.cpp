///Function : Pass by Reference

#include<iostream>
using namespace std;

///

void printArray(int brr[]) {

    for(int i = 0; i<3; i++) {
        brr[i] = brr[i]+10;
    }

    cout<<"Print Brr "<<endl;
    for(int i = 0; i<3; i++)
        cout<<brr[i]<<' ';
    cout<<endl;
}

int main() {

    int arr[] = {1, 2, 3};

    printArray(arr);

    cout<<"Print Arr "<<endl;
    for(int i = 0; i<3; i++)
        cout<<arr[i]<<' ';
    cout<<endl;

    return 0;
}
