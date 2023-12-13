#include <stdio.h>

int main() {
    int arr1[100], arr2[100], merged[200];
    int size1, size2, i, j, k;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    printf("Enter the elements of the first array: ");
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    if (size1 != size2) {
        printf("The arrays must be of the same size.\n");
        return 0;
    }

    printf("Enter the elements of the second array: ");
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge the two arrays
    for (i = 0, j = 0, k = 0; i < size1 && j < size2; i++, j++, k++) {
        if (arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
        } else {
            merged[k] = arr2[j];
        }
    }

    // Print the merged array
    printf("The merged array is: ");
    for (i = 0; i < size1; i++) {
        printf("%d ", merged[i]);
    }

    printf("\n");

    return 0;
}
