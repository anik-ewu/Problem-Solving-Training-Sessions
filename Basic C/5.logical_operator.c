#include<stdio.h>


int main() {

    char c;
    //scanf("%c", &c);

    ///logical operator : OR : ||
    /*if (c == 'A' || c == 'B' || c == 'C') {
        printf("It is A or B or C");
    }

    else {
        printf("It is not A , not B and neither C");
    }*/

    int a;
    scanf("%d", &a);
    ///logical operator : And : &&
    if (a >= 0 && a <= 10) {
        printf("A is inside 0 - 10");
    }
    else if (a >= 100 && a <= 200) {
        printf("A is inside 100 - 200");
    }
    else {
        printf("A is greater than 200");
    }



    return 0;
}
