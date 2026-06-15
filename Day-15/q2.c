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
    int temp = a[0];
    for (i=0;i<n-1;i++){ 
        a[i]= a[i+1]; 
    }
    a[n-1]= temp;
    printf ("rotated array = ");
    for (i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
