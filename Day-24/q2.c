#include<stdio.h>
int main(){
    char s[100];
    int i,count;
    printf("enter a string ");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i=i+count){
        count=1;
        while(s[i]==s[i+count]){
            count++;
        }
        printf("%c%d",s[i],count);
    }
    return 0;
}
