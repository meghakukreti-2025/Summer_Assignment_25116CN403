#include<stdio.h>
int main(){
    int n,i,count=0;
    printf("enter a number");
    scanf("%d",&n);
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
return 0;
}
