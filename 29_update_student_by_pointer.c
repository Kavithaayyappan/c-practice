#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void updateMarks(struct Student *s, float newMarks) {
    s->marks = newMarks;
}

int main() {
    struct Student s = {101, "Ravi", 75.0};
    printf("Before Update: %.2f\n", s.marks);
    updateMarks(&s, 90.5);
    printf("After Update: %.2f\n", s.marks);
    return 0;
}