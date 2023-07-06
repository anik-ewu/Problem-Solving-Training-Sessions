#include<iostream>
using namespace std;


int main () {

    //char str[50];
    string str;

    ///input without space
    /*cin>>str;
    cout<<str;
    cout<<endl;*/

    ///input with space
    string str2;
    getline(cin, str2);
    //cout<<str2<<endl;

    ///size of the string
    int len = str2.size();

    //cout<<"Size of str2: "<<len<<endl;

    cout<<endl;
    cout<<"First 3 char"<<endl;
    for (int i = 0; i < 3; i++) {
        cout<<str2[i];
        cout<<str2[i];
    }
    cout<<endl;

    cout<<endl;
    cout<<"Reverse order"<<endl;
    for (int i = len - 1; i>= 0; i--) {
        cout<<str2[i];
    }
    cout<<endl;


    return 0;
}
