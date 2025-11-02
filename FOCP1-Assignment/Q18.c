#include <stdio.h>
int main() {
    int n, i, j, f = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Duplicate elements are: ");
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                int a = 0;
                for (int k = 0; k < i; k++) {
                    if (arr[k] == arr[i]) {
                        a = 1;
                        break;
                    }
                }
                if (!a) {
                    printf("%d ", arr[i]);
                    f = 1;
                }
                break;
            }
        }
    }
    if (!f)
        printf("-1");

    printf("\n");
    return 0;
}
