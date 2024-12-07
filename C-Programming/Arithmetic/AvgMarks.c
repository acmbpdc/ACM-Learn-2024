// avg_marks.c
#include <stdio.h>

int main() {
    float marks[6], sum = 0.0, average;
    for (int i = 0; i < 6; i++) {
        printf("Enter marks for course %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }
    average = sum / 6;
    printf("Average marks: %.2f\n", average);
    return 0;
}
