#include<stdio.h>
int main(){
    int n,new,rev=0;
    printf ("enter the number");
    scanf("%d",&n);
    while (n!=0){
        new = n%10;
        rev= rev*10 + new;
        n=n/10;
    }
printf("the reverse of the number is=%d",rev);
return 0;
}
