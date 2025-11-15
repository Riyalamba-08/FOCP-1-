#include <stdio.h>
int main() {
    int n, x, y, z = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Duplicate elements are: ");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                int x = 0;
                for (int k = 0; k < i; k++) {
                    if (arr[k] == arr[i]) {
                        x = 1;
                        break;
                    }
                }
                if (!x) {
                    printf("%d ", arr[i]);
                    z = 1;
                }
                break;
            }
        }
    }
    if (!z)
        printf("-1");

    printf("\n");
    return 0;
}
