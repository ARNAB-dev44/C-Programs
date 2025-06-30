// linear search final code
#include <stdio.h>

int main() {
    int arr[100], n, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;  // Stop after finding the element
        }
    }

    if (!found) {
        printf("Element not found in the array\n");
    }

    return 0;
}
