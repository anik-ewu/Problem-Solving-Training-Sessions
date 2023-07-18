///Problem : Write a program to sum of digits of given integer number.
///Example :
///15 => 1 + 5 = 6
///10 => 1 + 0 = 1
///125 => 1+2+5 = 8
#include<iostream>
using namespace std;

int main() {

    int n;
    int sum = 0;
    cin >> n;
    ///6978
    while (n > 0) {
        int rem = n % 10;
        sum = sum + rem;
        n = n / 10;
        cout<<sum <<' '<<n<<endl;
    }
    cout<<"Digit Sum : "<<sum<<endl;


    /*
    ///1000 / 10 = 100
    ///100 / 10  = 10
    ///6978 / 10 = 697
    ///697 / 10 = 69
    ///Res | Remainder
    ///=> 6978 % 10 => 8  sum = sum + 8
      //  6978 / 10 => 697
    ///=> 697  % 10 => 7  sum = sum + 7
    ///=> 69   %  10 => 9  sum = sum + 9
    ///=> 6    %  10 => 6  sum = sum + 6
    ///=> 0
    */

    return 0;
}

