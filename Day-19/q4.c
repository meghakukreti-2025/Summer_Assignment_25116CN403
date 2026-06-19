#include <stdio.h>
int main() {
    int n,i,j,sum;
    printf("enter number of rows and columns");
    scanf("%d",&n);
    int a[n][n];
    printf("enter the elements of the matrix=");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        sum=sum+a[i][i];
    }
    printf("diagonal sum= %d",sum);
return 0;
}
