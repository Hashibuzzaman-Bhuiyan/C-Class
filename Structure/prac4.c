// Referencing a structure through a pointer
#include <stdio.h>
//Hashib
struct student {
    int number;
    char name[20];
    double grade;
};

int main(void) {
    struct student s = {1, "Hong Gil-dong", 4.3};
    struct student *p;
    p = &s;

    // Three ways to access structure members
    printf("Student number=%d Name=%s Grade=%.2f\n", s.number, s.name, s.grade);
    printf("Student number=%d Name=%s Grade=%.2f\n", (*p).number, (*p).name, (*p).grade);
    printf("Student number=%d Name=%s Grade=%.2f\n", p->number, p->name, p->grade);

    return 0;
}
