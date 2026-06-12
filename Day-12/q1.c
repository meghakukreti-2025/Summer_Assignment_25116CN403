#include <stdio.h>
void pal(int a){
    int new,rev=0;
    int prev=a;
    while (a!=0){
        new = a%10;
        rev= rev*10 + new;
        a=a/10;
    }
    if (rev==prev){
        printf("the number is palindrome");
    }
    else{
        printf("the number is not palindrome");
    }
}
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    pal(n);
    return 0;
}
