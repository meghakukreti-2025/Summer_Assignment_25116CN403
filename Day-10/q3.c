#include <stdio.h>
int main(){
    int n,i,j,k;
    printf("enter number of rows");
    scanf ("%d",&n);
    for (i=1;i<=n;i++){
        for (j=1;j<=n-i;j++){ //for spaces
            printf (" ");
            }
        for (k=1;k<=i;k++) { //for printing increasing no.s
            printf ("%d",k); 
            }
         for (k=i-1;k>=1;k--) { //for printing decreasing no.s
            printf ("%d",k); 
            }       
         printf("\n");
    }
    return 0;
}
