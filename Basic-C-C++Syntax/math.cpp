#include<iostream>
#include<math.h> /// for min, max, pow, log
#include<cstdlib> /// for abs
using namespace std;

int main() {

    ///Built in math functions : min, max, sqrt, log, pow, abs, floor, ceil

    int a = 10;
    int b = 100;

    ///max min
    int max_number = max(a, b);
    int min_number = min(a, b);
    cout<<"Max : " << max_number<<endl;
    cout<<"Min : " << min_number<<endl;

    ///sqrt
    int sqrt_value = sqrt(b);
    cout<<"SQRT of b : "<<sqrt_value<<endl;

    ///log
    double log_value_a = log10(25); /// log base considered 10
    double log_value_b = log(25); /// default log base taken, which is 2
    cout<<"Log value of 25 in base 10: "<<log_value_a<<endl;
    cout<<"Log value of 25 in base 2: "<<log_value_b<<endl;

    /// pow
    a = 2, b= 3;
    int power_value = pow(a,b); /// a^b
    cout<<"Power value : "<<power_value<<endl;

    ///abs
    a = 10, b = 100;
    int absolute_value = abs(a-b);
    cout<<"absolute value "<< absolute_value<<endl;

    /// floor and ceiling
    double cc = 10.5;
    int x = floor(cc);
    int y = ceil(cc);
    int z = round(cc);
    cout<<"floor of "<<cc <<" is : "<< x <<endl;
    cout<<"ceil of "<<cc <<" is : "<< y <<endl;
    cout<<"round of "<<cc <<" is : "<< z <<endl;

    return 0;
}

