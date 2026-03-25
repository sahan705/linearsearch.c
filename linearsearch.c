#include <stdio.h>

int main() {
    int array[100], search_key, c, n;

    printf("Enter number of elements in array\n");
    // Get the number of elements from the user
    scanf("%d", &n);

    printf("Enter %d integer(s)\n", n);
    // Get the array elements from the user
    for (c = 0; c < n; c++) {
        scanf("%d", &array[c]);
    }

    printf("Enter a number to search\n");
    // Get the element to search for
    scanf("%d", &search_key);

    // Perform the linear search
    for (c = 0; c < n; c++) {
        if (array[c] == search_key) { /* If required element is found */
            printf("%d is present at location %d.\n", search_key, c + 1);
            break; // Exit the loop once the element is found
        }
    }

    // Check if the loop completed without finding the element
    if (c == n) {
        printf("%d isn't present in the array.\n", search_key);
    }

    return 0;
}
