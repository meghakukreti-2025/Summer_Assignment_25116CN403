#include<stdio.h>
int main(){
    char s[100];
    int i;
    printf("enter a string ");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]>=97&&s[i]<=122){
            s[i]=s[i]-('a'-'A');
        }
    }
    printf("uppercase string=%s",s);
return 0;
}
