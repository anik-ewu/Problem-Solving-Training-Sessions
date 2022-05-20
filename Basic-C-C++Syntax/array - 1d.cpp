#include<iostream>
using namespace std;

int main() {

      ///initialize array after declaring
//    int arr[3] = {1, 2 , 3};

       int n;
       cin>>n;
       int arr[n+2];

//       cin>>arr[0];
//       cin>>arr[1];
//       cin>>arr[2];
//       cin>>arr[3];
//       cin>>arr[4];


       for(int i = 0; i<n; i++) {
            cin>>arr[i];
       }


    for(int i = 0; i < n; i++) {
        cout<<"index : "<<i<<' '<<"value "<<arr[i]<<endl;
    }





    return 0;
}
