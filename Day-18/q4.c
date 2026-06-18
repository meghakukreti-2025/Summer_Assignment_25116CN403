#include <stdio.h>
int main(){
  int n,i,j,e;
  printf ("enter the number of array elements");
  scanf ("%d", &n);
  int a[n];
  for (i=0;i<n;i++){
  printf("enter a[%d]", i);
  scanf("%d",&a[i]);
  }
  for(i =0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]<a[j]) {
                e=a[i];
                a[i]=a[j];
                a[j]=e;
            }
        }
    }
    printf("array in descending order = ");
    for(i =0;i<n;i++) {
        printf("%d\t",a[i]);
    }
return 0;
}
