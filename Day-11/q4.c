#include <stdio.h>
int fact(int n){
    int i,fact=1;
    for (i=1;i<=n;i++){
        fact= fact*i;
        }
    return fact;
}
int main(){
    int n1,r;
    printf("enter a number");
    scanf("%d",&n1);
    r= fact(n1);
    printf ("factorial=%d",r);
    return 0;
}
