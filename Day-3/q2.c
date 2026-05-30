#include<stdio.h>
int main(){
    int a,b,i,j,count,pr;
    printf("enter the range");
    scanf("%d%d",&a,&b);
    printf("the prime numbers in the given range:");
    for (i=a;i<=b;i++){
        count =0;
     for (j=1;j<=i;j++){
        if (i%j==0){
            count++;
            }
        } 
        if (count==2){
            pr=i;
            printf("%d\t",i);
        }
    }
    if (pr==0){
        printf("no prime numbers");
        }
    
    return 0;
    }
