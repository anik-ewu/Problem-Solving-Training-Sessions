#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n; ///array size
    int arr[n];

    for(int i = 1; i<=n; i++) {
        cin>>arr[i];
    }

    /// 3 1 5 4 -> 1 3 4 5
    /// 1 3 5 4
    /// 1 3 4 5



    ///sorting
    for(int i = 1; i<=n; i++) {
      for(int j = i+1; j<=n; j++) {
        if(arr[i] > arr[j]) {
            swap(arr[i], arr[j]);
        }
      }
    }


    return 0;
}

