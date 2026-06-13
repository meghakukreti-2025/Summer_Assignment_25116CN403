#include <stdio.h>
int main(){
int n,i;
printf ("enter the number of array elements");
scanf ("%d",&n);
int a[n];
for (i=0;i<n;i++){
    printf("enter a[%d]",i);
    scanf("%d",&a[i]);
}
printf("the array elements are ");
for (i=0;i<n;i++){
    printf("%d", a[i]);
    printf("\t");
}
return 0;
}
