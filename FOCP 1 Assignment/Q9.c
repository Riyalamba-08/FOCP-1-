#include <stdio.h>
int main() {
    int n, i, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d scores: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] == 99) {
            printf("First occurrence of 99 is at index %d (position %d)\n", i, i + 1);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("99 was not found in the array.\n");
    }
    return 0;
}
