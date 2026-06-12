#include <stdio.h>
int per (int a){
    int i,sum=0;
    int og=a;
    for (i=1;i<a;i++){ 
        if (og%i==0){
            sum=sum+i;
        }
    }
    if (sum==og){
        printf("the number is a perfect number");
        }
    else{
        printf("the number is not a perfect number");
    }
return 0;
}

int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    per(n);
    return 0;
}
