#include<stdio.h>


void printAscendingOrder(int n) {

    printf("In function 1\n");

    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");

}

void printDescendingOrder(int n) {

    printf("In function 2\n");

    for (int i = n; i >= 1; i--) {
        printf("%d ", i);
    }
}


int main() {

    int n;
    scanf("%d", &n);


    printAscendingOrder(n);
    printf("\nIn main function\n");
    printDescendingOrder(n);


    return 0;
}




