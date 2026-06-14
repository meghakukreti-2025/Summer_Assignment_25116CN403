#include <stdio.h>
int main() {
    int n, i, j;
    printf("enter the number of array elements");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("enter a[%d]", i);
        scanf("%d", &a[i]);
    }
    printf("duplicate elements are= ");
    int count = 0;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                printf("%d\n", a[i]);
                count = 1;
                break;
            }
        }
    }
    if (count == 0) {
        printf("no duplicates found");
    }
    return 0;
}
