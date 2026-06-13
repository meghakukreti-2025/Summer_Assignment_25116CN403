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
int sum=0;
float avg;
for (i=0;i<n;i++){
    sum= sum+ a[i];
    }
avg = (float)sum/n;
printf ("the sum and average = %d %f",sum,avg);
return 0;
}
