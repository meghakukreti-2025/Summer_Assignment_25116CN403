#include <stdio.h>
int main(){
    int n,i,j,k;
    printf("enter number of rows");
    scanf ("%d",&n);
    for (i=1;i<=n;i++){
        char ch='A';
        for (j=1;j<=n-i;j++){ //for spaces
            printf (" ");
            }
        for (k=1;k<=i;k++) { //for printing increasing alphabets
            printf ("%c",ch);
            ch++;
            }
        ch = ch-2; // -2 because of ch++
         for (k=i-1;k>=1;k--) { //for printing decreasing alphabets
            printf ("%c",ch);
            ch--;
            }       
         printf("\n");
    }
    return 0;
}
