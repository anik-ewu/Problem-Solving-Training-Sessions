#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("i = %d\n", i);
    }
    printf("\n");
    printf("Reverse Order:\n");

    ///Variation : loop in reverse order
    for (int i = n; i >=1; i--) {
        printf("i = %d\n", i);
    }


    return 0;
}
