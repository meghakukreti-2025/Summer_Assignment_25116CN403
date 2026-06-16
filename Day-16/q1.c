#include <stdio.h>
int main() {
    int n,i,sum=0;
    printf ("enter the range");
    scanf ("%d", &n);
    int a[n];
    for (i=0;i<n-1;i++){
        printf("enter a[%d]", i);
        scanf("%d",&a[i]);
    }
    for(i = 0; i <n-1; i++) { //calculating sum of the array elements
        sum = sum + a[i];
    }
    int expected = n * (n + 1) / 2; //formula for expected sum
    printf("missing number = %d", expected - sum);
    return 0;
}
