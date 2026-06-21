#include<stdio.h>
int main(){
    char s[100];
    char *p;
    int len=0;
    printf("enter a string ");
    scanf("%s",s);
    p=s;
    while(*p!='\0'){
        len++;
        p++;
    }
    printf("length=%d",len);
    return 0;
}
