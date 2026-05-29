#include<stdio.h>
int main(){
    int n,new,prod=1;
    printf ("enter the number");
    scanf("%d",&n);
    while (n!=0){
        new = n%10;
        prod= prod*new;
        n=n/10;
    }
printf("the product of digits is=%d",prod);
return 0;
}
