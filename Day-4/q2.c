#include<stdio.h>
int main(){
    int a,b,n,new,i;
    printf("enter which fibonacci term is to be printed");
    scanf("%d",&n);
    if (n==1){
        printf ("0");
    }
    else if (n==2){
        printf ("1");
    }
    else {
    a=0;
    b=1;
    for (i=0;i<=n-3;i++){
        new=a+b;
        a=b;
        b=new;
    }
    printf("%d",new);
    }
    return 0;
}
