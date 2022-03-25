#include<iostream>
#include<cstdio>
using namespace std;

int main() {

    char ch;
    string s, p;

    cin>>s; ///word input
    cout<<s<<endl;

    getchar();
    getline(cin, p); /// sentence input
    cout<<p<<endl;

    int len  = s.size(); /// to get the length of s
    cout<<"length of s "<< len <<endl;
    cout<<"length of p "<< p.size() <<endl;



    return 0;
}

