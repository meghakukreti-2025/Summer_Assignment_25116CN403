#include<stdio.h>
int main(){
    int n,new,rev=0,sign=1;
    printf("enter the number ");
    scanf("%d",&n);
    if(n<0){
        sign=-1;
        n=-n;
    }
    while(n!=0){
        new=n%10;
        rev=rev*10+new;
        n=n/10;
    }
    rev=rev*sign;
    printf("the reverse of the number is = %d",rev);
return 0;
}
