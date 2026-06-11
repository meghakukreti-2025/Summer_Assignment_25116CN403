#include <stdio.h>
int max(int a,int b){
    int m=a>b?a:b;
    return m;
}
int main(){
    int n1,n2,maxn;
    printf("enter two numbers");
    scanf("%d%d",&n1,&n2);
    maxn = max(n1, n2);
    printf("maximum no.=%d",maxn);
    return 0;
}
