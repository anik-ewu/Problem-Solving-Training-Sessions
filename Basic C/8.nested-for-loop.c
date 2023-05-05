#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    ///: Nested For Loop : i.e: loop inside another loop

    for (int i = 1; i <= n; i++) {

//        for (int j = 1; j <= i; j++) {
//            printf("%d ", j);
//        }

        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }


    return 0;
}

