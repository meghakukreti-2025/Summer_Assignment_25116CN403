#include<stdio.h>
int main(){
    char s[100],rev[100];
    int i,len=0,j;
    printf("enter a string ");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        len++;
    }
    i=len-1;
    j=0;
    while(i>=0){
    rev[j]=s[i];
    i--;
    j++;
    }
    rev[j]='\0';
    printf("reverse string=%s",rev);
    return 0;
}
