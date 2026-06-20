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
    printf("row-wise sum=\n");
    for(i=0;i<m;i++){
        int rowsum=0;
        for(j=0;j<n;j++){
            rowsum=rowsum+a[i][j];
        }
        printf("row %d sum=%d\n",i+1,rowsum);
    }
return 0;
}
