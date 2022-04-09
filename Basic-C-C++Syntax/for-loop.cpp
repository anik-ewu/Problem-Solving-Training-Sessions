#include<iostream>
using namespace std;

int main() {


    ///for loop
    /*for(int i = 1; i < 10; i++) {
        cout<<"i : "<<i<<endl;
    }*/

    /*for(int i = 1; i < 10; i++) {
        if(i < 5)
            cout<<i<<" ----> Less than 5"<<endl;
        else
            cout<<i<<" ----> Greater than or equal to 5"<<endl;

    }*/

    ///nested for loop
    /*for(int i = 1; i <= 5; i++){
        cout<<" i : "<<i<<" ";
        for(int j = 1; j<= 5; j++) {
            cout<<j<<' ';
        }
        cout<<endl;
        cout<<"--------------------"<<endl;
    }*/

    /*for(int i = 1; i <= 3; i++){
        int sum = 0;
        for(int j = 1; j<= 3; j++) {
            sum = sum+j;
        }
        cout<<sum<<endl;
    }*/

    /*for(int i = 1; i <= 3; i++){
        int sum = 0;
        for(int j = i; j<= 3; j++) {
            sum = sum+j;
        }
        cout<<sum<<endl;
    }*/

    /*for(int i = 1; i <= 5; i+=3){
        int sum = 0;
        for(int j = i; j<= 5; j+=2) {
            sum = sum+j;

            if(sum > 5) {
                break;
            }
        }
        cout<<sum<<endl;
    }*/


    /*for(int i = 1; i <= 3; i++){
        int sum = 0;
        for(int j = i; j<= 5; j++) {

            if(j < 3) {
                continue;
            }

            sum = sum+j;
        }
        cout<<sum<<endl;
    }*/


    return 0;
}
