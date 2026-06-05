#include <stdio.h>
int main(){
    int n,i,j,pf;
    printf("enter a number");
    scanf("%d",&n);
    int og=n;
  //loop for checking factors
    for (i=1;i<=n;i++){ 
        if (og%i==0){       //i is a factor
            int count=0;
            for (j=1;j<=i;j++){  //loop for checking whether the factor is prime or not
                if (i%j==0){
                count++;
                }
            }
            if (count==2){
             pf = i;
            }
    }
    }
 printf ("the largest prime factor of %d is %d",og,pf);

return 0;
}
