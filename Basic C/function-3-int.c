#include<stdio.h>

///Function declaration & it's return type:
/*
int name() {
   code....
   return int;
}
*/

int fun() {

    int sum = 0;
    for (int i = 1; i <= 5; i++) {
        sum += i;
    }

    return sum;
}

int evenSum() {

    ///scan n
    ///1 to n
    ///return sum


}


int main() {
    printf("Before Function\n");

    int addValues = fun();
    printf("Sum :%d \n", addValues);


    printf("After Function\n");


    return 0;
}



