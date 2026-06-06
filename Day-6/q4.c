#include <stdio.h>
int main(){
    int x,n,i,j;
    double ans=1;
    printf ("enter the number");
    scanf ("%d",&x);
    printf ("enter the exponential power");
    scanf ("%d",&n);
    if (n>=0){ //for positive power
        for (i=1;i<=n;i++){
        ans= ans*x;
        }
    }
    else { //for negative power
        n = n*(-1);
        for (j=1;j<=n;j++){
        ans = ans*x;    
        }
        ans = 1/ans;
    }
    printf ("the answer is %lf",ans);
    return 0;
}
