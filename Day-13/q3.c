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
int max= a[0],min=a[0];
for (i=1;i<n;i++){
    if (a[i]>max){
    max= a[i];
    }
    if (a[i]<min){
    min= a[i];
    }
}
printf ("the largest and smallest elememts are= %d %d",max,min);
return 0;
}
