#include <stdio.h>

int main() {
    int marks[] = {75, 82, 91, 68, 88};
    int N = sizeof(marks) / sizeof(marks[0]);
    int *ptr = marks; 
    printf("Student marks:\n");
    for (int i = 0; i < N; i++) {
        printf("Mark at position %d: %d\n", i + 1, *(ptr + i));
    }
    return 0;
}