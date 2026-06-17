#include <stdio.h>
int main(){
    int n1,n2,i;
    printf ("enter the number of array elements for array 1");
    scanf ("%d", &n1);
    int a[n1];
    for (i=0;i<n1;i++){
        printf("enter a[%d]", i);
        scanf("%d",&a[i]);
        }
    printf ("enter the number of array elements for array 2");
    scanf ("%d", &n2);
    int b[n2];
    for (i=0;i<n2;i++){
        printf("enter b[%d]", i);
        scanf("%d",&b[i]);
        }
    int n = n1+n2;
    int c[n];
    for (i=0;i<n1;i++){
        c[i]=a[i];
        }    
    for (i=0;i<n2;i++){
        c[n1+i]=b[i];
    }
    int freq[100] = {0};
    for(int i = 0; i < n; i++) {
      freq[c[i]]++; //counting frequencies for each element
    }
  printf("union of array = ");
    for(int i = 0; i < n; i++) {
        if(freq[c[i]] > 0) {
            printf("%d ", c[i]);
            freq[c[i]] = 0;
        }
    }
  return 0;
}
