#include <stdio.h>
int main(){
    int n,i;
    printf ("enter the number of array elements");
    scanf ("%d", &n);
    int a[n];
    for (i=0;i<n;i++){
    printf("enter a[%d]", i);
    scanf("%d",&a[i]);
    }
    int e;
    printf("enter the element to be searched");
    scanf("%d", &e);
    for (i=0;i<n;i++){
    if (a[i] == e) {
        printf("The element is found at index %d", i);
        break;
    }
    }
    if (i == n) {
    printf("Element not found");
    }
return 0;
}
