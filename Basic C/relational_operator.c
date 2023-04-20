#include<stdio.h>

int main() {

    int a , b;
    scanf("%d%d", &a, &b);
    ///relational operator
    /*if (a > b) {
        printf("A is bigger than B");    }
    if (a < b) {
        printf("A is less than B");
    }*/

//    if (a > b) {
//        printf("A is bigger than B");//    }
//    else if (a < b) {
//        printf("A is less than B");
//    }
//    else {
//        printf("A is equal to B");
//    }

    ///greater than or equal
    /*if (a >= b) {
        printf("A is bigger or equal B");    }
    else {
        printf("A less than B");
    }*/
    ///less than or equal
    /*if (a <= b) {
        printf("A is less or equal B");    }
    else {
        printf("A greater than B");
    }*/

    ///equal
    if (a == b) {
        printf("A and B are equal");
    }
    ///not equal
    if (a != b) {
        printf("A and B are not equal");
    }



    return 0;
}
