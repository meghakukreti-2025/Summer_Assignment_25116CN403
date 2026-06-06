#include <stdio.h>
int main(){
    int n,j,i=0;
    int bin[32];
    printf("enter a decimal number");
    scanf("%d",&n);
    do {
        bin[i]=n%2;
        n=n/2;
        i++;
    }
    while (n>0);
    printf("binary number =");
    for (j=i-1;j>=0;j--){ //array indexing starts from 0
        printf("%d",bin[j]);
    }
return 0;
}
