#include<stdio.h>

void addition(int x, int y) {

//    int a;
//    int b;
    int res = 0;
//    scanf("%d%d", &a, &b);
    res = x + y;
    printf("Addition: %d\n", res);
}
void substraction(int a, int b) {

//    int a;
//    int b;
    int res = 0;
//    scanf("%d%d", &a, &b);
    res = a - b;
    printf("Subtraction: %d\n", res);
}
void multiplication(int a, int b) {

//    int a;
//    int b;
    int res = 0;
//    scanf("%d%d", &a, &b);
    res = a * b;
    printf("Multiplication: %d", res);
}


int main() {

//    int sum = SUM();

    int a;
    int b;
    int res = 0;
    scanf("%d%d", &a, &b);

    addition(a, b);
    substraction(a, b);
    multiplication(a, b);

    return 0;
}




