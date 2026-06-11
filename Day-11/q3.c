#include <stdio.h>
int prime(int n){
    int i,count=0;
    for (i=1;i<=n;i++){
        if (n%i==0){
            count++;
            }
        else{
            count=count;
        }
    }
    if (count==2){
        printf("the number is a prime number");
    }
    else{
        printf("the number is not a prime number");
    }
}
int main(){
    int n1;
    printf("enter a number");
    scanf("%d",&n1);
    prime(n1);
    return 0;
}
