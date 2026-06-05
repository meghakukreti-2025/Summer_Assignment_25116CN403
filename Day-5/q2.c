#include <stdio.h>
int main(){
    int n,i,sum=0,rem;
    printf("enter a number");
    scanf("%d",&n);
    int og=n;
    while (n!=0){
        rem=n%10;
        int fact=1;
        for (i=1;i<=rem;i++){
            fact=fact*i;
        }
        sum = sum+fact;
        n=n/10;
    }
    if (sum==og){
        printf("the number is a strong number");
    }
    else {
        printf("the number is not a strong number");
    }
return 0;
}
