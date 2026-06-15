#include <stdio.h>
int main() {
    int n, i;
    printf("enter the number of elements =");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("a[%d]= ", i);
        scanf("%d", &a[i]);
    }
    int j = 0; 
    for (i = 0; i < n; i++) {
        if (a[i] != 0) {
            a[j] = a[i];
            j++;
        }
    }
    while (j < n) {
        a[j] = 0;
        j++;
    }
    printf("new array =");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
