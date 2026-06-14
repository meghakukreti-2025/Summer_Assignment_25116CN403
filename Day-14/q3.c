#include <stdio.h>
int main() {
    int n, i;
    printf("enter the number of array elements");
    scanf("%d", &n);
    if (n <2) {
        printf("at least 2 elements required");
    }
    int a[n];
    for (i = 0; i < n; i++) {
        printf("enter a[%d] ", i);
        scanf("%d", &a[i]);
    }
    int m1 = a[0];
    for (i = 1; i < n; i++) { // largest element
        if (a[i] > m1) {
            m1 = a[i];
        }
    }
    int m2;
    int e = 0;
    for (i = 0; i < n; i++) { // finding elements different from m1
        if (a[i] != m1) {
            m2 = a[i];
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("no second largest element");
        return 0;
    }
    for (i = 0; i < n; i++) { // second largest element
        if (a[i] > m2 && a[i] != m1) {
            m2 = a[i];
        }
    }
    printf("second largest element is %d", m2);
    return 0;
}
