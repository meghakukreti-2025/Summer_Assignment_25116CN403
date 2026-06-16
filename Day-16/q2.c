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
  int e,j,f=0;
  for (i=0;i<n;i++){
      int count=0;
      for (j=0;j<n;j++){
          if (a[i] == a[j]) {
              count++;
          }
      }
      if (count>f){
          f= count;
          e= a[i];
      }
  }
  printf("the maximum frequency element is %d", e);
return 0;
}
