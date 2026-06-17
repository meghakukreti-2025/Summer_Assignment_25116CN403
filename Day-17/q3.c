#include <stdio.h>
int main(){
    int n1,n2,i,j;
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
    printf("the intersection of the arrays is = ");
    for(i=0;i<n1;i++){
        int count=0;
        for (j=0;j<i;j++){
            if (a[i]==a[j]){
                count = 1;
                break;
            }
        }
        if (count==1){
            continue;
        }
        for (j=0;j<n2;j++){
            if (a[i]==b[j]){
                printf ("%d\t",a[i]);
                break;
            }
        }
    } 
  return 0;
}
