#include<stdio.h>
int main(){
    int a,b,i,n,lcm;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    n= a>b? a:b;
    int p=a*b;
    for (i=p;i>=n;i--){
        if (i%a==0 & i%b==0){
            lcm=i;
        }
    }
    printf("the lowest common multiple of %d and %d is %d",a,b,lcm);
return 0;
}
