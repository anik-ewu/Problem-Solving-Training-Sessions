#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Value of i = %d\n", i);
//        if (i % 2 != 0) {
//            printf("Go to the for loop again\n\n");
//            continue;
//        }
        if (i % 2 == 1) {
            printf("Go to the for loop again\n\n");
            continue;
        }

//        printf("i is Even so print i = %d\n\n", i);
        printf("I\n");
        printf("Live in \n");
        printf("Live Dhaka \n");
    }

    return 0;
}
