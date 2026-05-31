#include<stdio.h>
int main(){
    int a,b,n,new,i;
    printf("enter the number of terms");
    scanf("%d",&n);
    printf("the fibonacci series is as follows- 0 1 ");
    a=0;
    b=1;
    for (i=0;i<=n;i++){
        new=a+b;
        printf("%d",new);
        a=b;
        b=new;
        printf("\t");
    }
    return 0;
}
