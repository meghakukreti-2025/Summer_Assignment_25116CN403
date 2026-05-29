#include<stdio.h>
int main(){
    int n,new,sum=0;
    printf ("enter the number");
    scanf("%d",&n);
    while (n!=0){
        new = n%10;
        sum= sum+new;
        n=n/10;
    }
printf("the sum of digits is=%d",sum);
return 0;
}
