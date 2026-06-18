#include <stdio.h>
int main(){
  int n,i,j,b;
  printf ("enter the number of array elements");
  scanf ("%d", &n);
  int a[n];
  for (i=0;i<n;i++){
  printf("enter a[%d]", i);
  scanf("%d",&a[i]);
  }
  for(i =0;i<n-1;i++) {
        for(j=0;j<n-i-1; j++) {
            if(a[j]>a[j+1]) {
                b = a[j];
                a[j] = a[j+1];
                a[j+1] =b;
            }
        }
    }
  printf("bubble sort array=\t");
  for(i =0;i< n;i++) {
        printf("%d\t",a[i]);
    }
return 0;
}
