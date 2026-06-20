#include<stdio.h>
int main(){
    int n,i,j,m=1;
    printf("enter order of square matrix=");
    scanf("%d",&n);
    int a[n][n];
    printf("enter matrix elements=");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]!=a[j][i]){
                m=0;
                break;
            }
        }
    }
    if(m==1){
        printf("matrix is symmetric");
    }
    else{
        printf("matrix is not symmetric");
    }
    return 0;
}
