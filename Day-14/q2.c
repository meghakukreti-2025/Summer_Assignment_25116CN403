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
  int e,count=0;
  printf("enter the element to be searched");
  scanf("%d", &e);
  for (i=0;i<n;i++){
  if (a[i] == e) {
  count++;
  }
  }
  printf("the frequency of the element is %d", count);
return 0;
}
