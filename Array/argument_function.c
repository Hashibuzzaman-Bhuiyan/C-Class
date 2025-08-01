#include <stdio.h>

#define SIZE 7

// Function prototypes
void modify_array(int a[], int size);
void print_array(const int a[], int size);  // Using const to prevent modification

int main(void) {
    int list[SIZE] = {1, 2, 3, 4, 5, 6, 7};

    printf("Original array:\n");
    print_array(list, SIZE);

    modify_array(list, SIZE);

    printf("Modified array:\n");
    print_array(list, SIZE);

    return 0;
}

void modify_array(int a[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        ++a[i];  // Increment each element
    }
}
void print_array(const int a[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%3d ", a[i]);
    }
    printf("\n");

}
