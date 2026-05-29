#include<stdio.h>
int main(){
    int n,new,rev=0;
    printf ("enter the number");
    scanf("%d",&n);
    int prev=n;
    while (n!=0){
        new = n%10;
        rev= rev*10 + new;
        n=n/10;
    }
    if (rev==prev){
        printf("the number is palindrome");
    }
    else{
        printf("the number is not palindrome");
    }
return 0;
}
