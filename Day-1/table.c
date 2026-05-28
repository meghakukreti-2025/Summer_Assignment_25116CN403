#include<stdio.h>
int main(){
    int n,i,prod;
    printf ("enter the number");
    scanf("%d",&n);
    for (i=1;i<=10;i++){
        prod= n*i;
        printf ("%d",prod);
        printf("\n");
        }
return 0;
}
