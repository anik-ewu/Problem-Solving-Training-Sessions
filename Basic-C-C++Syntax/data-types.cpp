///Topic: Data Types

#include<iostream>
#include<iomanip> /// for using setprecession of c++
#include<cstdio>  /// for using printf

using namespace std;

int main()
{

    ///char, int, unsigned int, boolean, double, long long int

    char a;
    int b;
    unsigned int c;
    bool flag;
    double dd;
    long long int lla;
    unsigned long long int ulla;

    ///char
    a= 'a';
    cout<<a<<endl;

    ///too see the ascii value of a character
    cout<<int(a)<<endl;

    ///unsigned int (can take positive values only)
    c = 5;
    cout<<c<<endl;

    ///boolean -> 0 == false, 1 == true
    flag = true;
    flag = false;
    flag = true;
    cout<<flag<<endl;

    ///double
    dd = 12.1111111111;
    cout<<setprecision(10);
    cout<<dd<<endl;
    printf("%.2f", dd);

    //long long int + unsigned long long int
    lla  = 1000000000000000000;
    ulla = 10000000000000000000;
    cout<<lla<<endl;
    cout<<ulla<<endl;




    return 0;
}

