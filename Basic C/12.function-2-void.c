#include<stdio.h>

///Function declaration & it's return type:
/*
void name() {
   code....
   return '1';
}
*/

void fun() {

    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return;
}


int main() {
    printf("Before Function\n");
    fun();
    printf("After Function\n");


    return 0;
}



