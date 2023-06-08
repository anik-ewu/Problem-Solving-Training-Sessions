#include<stdio.h>
int main() {

    int n;
    scanf("%d", &n);
    getchar();

    char arr[n + 2];

    ///Assign: arr[0] = 'A';
    ///Access: char ch = arr[0];


    for (int i = 1; i <= n; i++) {
        scanf("%c", &arr[i]);
    }
    ///Print Array Values
    /*
        printf("%c\n", arr[4]);
        printf("%c\n", arr[1]);

        char ch = arr[2];
        printf("%c\n", ch);
    */

    ///Write if else for each index
    /*
        if (arr[1] == 'a' || arr[1] == 'e') {
            printf("%c: is vowel\n", arr[1]);
        }
        if (arr[2] == 'a' || arr[2] == 'e') {
            printf("%c: is vowel\n", arr[2]);
        }
        if (arr[3] == 'a' || arr[3] == 'e') {
            printf("%c: is vowel\n", arr[2]);
        }
    */

    ///Use for loop

    for (int i = 1; i <= n; i++) {
        if (arr[i] == 'a' || arr[i] == 'e') {
            printf("%c: is vowel\n", arr[1]);
        }
    }




    return 0;
}
