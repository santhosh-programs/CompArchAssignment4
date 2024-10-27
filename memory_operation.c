#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;  
    int *arr;

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  
    }

    for (int i = 0; i < n; i++) {
        arr[i] = i * 10; 
    }

    printf("Array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    arr = NULL;  

    return 0;
}
