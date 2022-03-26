///Topic: Conditional Statement
///Notes: == equal, != not equal, less < , greater > , && and , or ||

#include<iostream>
using namespace std;

int main() {

    int a = 10, b =10, c;

    if(a > b) {
        cout<<a<<endl;
    }
    else if(b >= a) {
        cout<<b<<endl;
    }
    else {
        cout<<"Equal"<<endl;
    }
    cout<<"-------------------------------------"<<endl;
    string s = "Hello";
    string p = "Hello";

    if(s == p) {
        cout<<"Equal"<<endl;
    }
    if(s != p) {
        cout<<"NOT Equal"<<endl;
    }


      int x = 5, y = 15, z = 15;

      if(x > y  && x > z) {
        cout<<" X is Largest "<<endl;
      }
      else if(y > x && y > z) {
        cout<<" Y is Largest"<<endl;
      }
      if(z > y && z > x) {
        cout<<" Z is Largest"<<endl;
      }
    cout<<"-------------------------------------"<<endl;

      x = 5, y = 15, z = 15;

      if(x > y  || x > z) {
        cout<<" X is Largest "<<endl;
      }
      else if(y > x || y > z) {
        cout<<" Y is Largest"<<endl;
      }

      if(z > y || z > x) {
        cout<<" Z is Largest"<<endl;
      }


      cout<<"------------------------------"<<endl;
         a = 10, b = 5, c = 20;

        if(a <= b) {
            cout<<a<<endl;
        }
        if(b >= c || b<=a) {
            cout<<b<<endl;
        }
        if(c < a && c > b) {
            cout<<c<<endl;
        }

         a = 10, b = 5, c = 10;
         if(a <= b || a == 100) {
            cout<<" A "<<endl;
         }
         else if( b != c) {
            cout<<"B "<<endl;
         }
         else if(b < c && b < c) {
            cout<<"C"<<endl;
         }

    return 0;
}

