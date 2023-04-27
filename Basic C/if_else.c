#include<stdio.h>


int main() {

    char c;
    scanf("%c", &c);

    if (c == 'A') {
        printf("It is A");
    }
    else if (c == 'B') {
        printf("It is B");
    }
    else if(c == 'C') {
        printf("It is C");
    }
    else {
        printf("It is not A , not B and neither C");
    }


    return 0;
}
