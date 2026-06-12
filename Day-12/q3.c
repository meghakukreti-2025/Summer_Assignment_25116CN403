#include<stdio.h>
int fib (int num){
    int a,b,new,i;
    if (num==1){
        printf ("0");
    }
    else if (num==2){
        printf ("1");
    }
    else {
    a=0;
    b=1;
    for (i=0;i<=num-3;i++){
        new=a+b;
        a=b;
        b=new;
    }
    printf("%d",new);
    }
    return 0;
}

int main(){
    int n;
    printf("enter which fibonacci term is to be printed");
    scanf("%d",&n);
    fib(n);
    return 0;
}
