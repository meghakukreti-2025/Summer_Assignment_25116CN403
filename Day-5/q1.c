#include <stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    int og=n;
    for (i=1;i<n;i++){
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
