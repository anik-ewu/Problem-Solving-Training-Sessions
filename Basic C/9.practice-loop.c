#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    ///n = 5
    ///1 3 6 10 15
    ///1 2 3 4 5
    /*
     prefix sum;
     sum = 0;
     i = 1; sum = sum + i; sum = 1;
     i = 2; sum = sum + i; sum = 3;
     i = 3; sum = sum + i; sum = 6;
     i = 4; sum = sum + i; sum = 10

    */

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
        printf("%d ", sum);
    }

    return 0;
}
