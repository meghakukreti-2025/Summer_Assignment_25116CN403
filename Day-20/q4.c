#include<stdio.h>
int main(){
    int m,n,i,j;
    printf("enter rows and columns=");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("enter matrix elements=");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("column-wise sum=\n");
    for(j=0;j<n;j++){
        int colsum=0;
        for(i=0;i<m;i++){
            colsum=colsum+a[i][j];
        }
        printf("column %d sum=%d\n",j+1,colsum);
    }
return 0;
}
