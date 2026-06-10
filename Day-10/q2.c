#include <stdio.h>
int main(){
    int n,i,j,k;
    printf("enter number of rows");
    scanf ("%d",&n);
    for (i=n;i>=1;i--){ //decr loop
        for (j=1;j<=n-i;j++){ //for spaces
            printf (" ");
            }
        for (k=1;k<=2*i-1;k++) { //for printing *
            printf ("*"); 
            }
         printf("\n");
    }
    return 0;
}
