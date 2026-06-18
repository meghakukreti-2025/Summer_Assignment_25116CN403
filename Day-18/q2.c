#include <stdio.h>
int main(){
  int n,i,j,min,b;
  printf ("enter the number of array elements");
  scanf ("%d", &n);
  int a[n];
  for (i=0;i<n;i++){
  printf("enter a[%d]", i);
  scanf("%d",&a[i]);
  }
  for(i =0;i<n-1;i++) {
        min=i;
        for(j=i+1;j<n;j++) {
            if(a[j]<a[min]) {
                min=j;
            }
        }
        b=a[i];
        a[i]=a[min];
        a[min]=b;
    }
    printf("selection sort array= ");
    for(i=0;i<n;i++) {
        printf("%d\t",a[i]);
    }
    return 0;
}
