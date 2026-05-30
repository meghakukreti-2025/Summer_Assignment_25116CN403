#include<stdio.h>
int main(){
    int a,b,i,n,gcd;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    n= a>b? b:a;
    for (i=1;i<=n;i++){
        if (a%i==0 & b%i==0){
            gcd=i;
        }
    }
    printf("the greatest common divisor of %d and %d is %d",a,b,gcd);
return 0;
}
