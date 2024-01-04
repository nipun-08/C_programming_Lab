#include <stdio.h>
#include <stdlib.h>

int main() {
    // Using malloc
    int *arr1 = (int *)malloc(5 * sizeof(int));
    if (arr1 == NULL) {
        printf("Memory allocation failed for arr1.\n");
        return 1;
    }
    printf("Memory allocated successfully for arr1.\n");

    // Using calloc
    int *arr2 = (int *)calloc(5, sizeof(int));
    if (arr2 == NULL) {
        printf("Memory allocation failed for arr2.\n");
        return 1;
    }
    printf("Memory allocated successfully for arr2.\n");

    // Using realloc
    int *arr3 = (int *)realloc(arr1, 10 * sizeof(int));
    if (arr3 == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }
    printf("Memory reallocated successfully for arr1.\n");

    // Freeing memory
    free(arr1);
    free(arr2);
    free(arr3);

    return 0;
}
