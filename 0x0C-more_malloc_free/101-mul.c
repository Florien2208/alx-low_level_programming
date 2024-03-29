#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_valid_input(char* num) {
    /*
    Check if a number is valid input (positive integer)
    */
    while (*num != '\0') {
        if (!isdigit(*num)) {
            return 0;
        }
        num++;
    }
    return 1;
}

int multiply(char* num1, char* num2) {
    /*
    Multiply two positive numbers
    */
    return atoi(num1) * atoi(num2);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    char* num1;
   num1 = argv[1];
    char* num2;
   num2 = argv[2];

    if (!is_valid_input(num1) || !is_valid_input(num2)) {
        printf("Error\n");
        return 98;
    }

    int result;
   result = multiply(num1, num2);
    printf("%d\n", result);
    return 0;
}
