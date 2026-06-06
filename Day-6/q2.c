#include <stdio.h>
#include <math.h>
int main(){
    int n,d,decimal=0,i=0;
    printf("enter the binary number");
    scanf("%d",&n);
    while (n>0){
        d = n%10; //digits of the number
        decimal = decimal + d*pow(2,i);
        n= n/10;
        i++;
    }
    printf("the decimal number =%d",decimal);
return 0;
}
