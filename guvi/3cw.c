#include <stdio.h>

int main() {
    int marks[] = {75, 82, 91, 68, 88};

    int *ptr = marks; 
    printf("Student marks:\n");
    for (int i = 0; i < 4; i++) {
        printf("Mark at position %d: %d\n", i + 1, *(ptr + i));
    }
    return 0;
}