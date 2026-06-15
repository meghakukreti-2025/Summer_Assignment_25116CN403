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
    int temp;
    for (i=0;i<n/2;i++){ //reversing the array
        temp = a[i];
        a[i]= a[n-1-i];
        a[n-1-i]= temp;
    }
    printf ("reversed array = ");
    for (i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
