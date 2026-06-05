#include <stdio.h>
int main(){
    int n,i,f;
    printf("enter a number");
    scanf("%d",&n);
    int og=n;
    printf ("the factors are ");
    for (i=1;i<=n;i++){
        if (og%i==0){
            printf("%d",i);
            printf("\t");
        }
    }
    return 0;
}
