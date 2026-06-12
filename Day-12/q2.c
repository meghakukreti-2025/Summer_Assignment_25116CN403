#include<stdio.h>
#include<math.h>
int arms (int n){
    int a,sum=0,count=0;
    int og=n;
    while (n!=0){
        count++;
        n=n/10;
    }
    n=og;
    while (n!=0){
        a=n%10;
        sum = sum+ pow(a,count);
        n=n/10;
    }
    if (sum==og){
        printf("the number is an armstrong number");
    }
    else{
        printf("the number is not an armstrong number");
    }
    return 0;
}

int main(){
    int b;
    printf("enter a number");
    scanf("%d",&b);
    arms(b);
    return 0;
}
