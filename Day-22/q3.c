#include<stdio.h>
int main(){
    char s[100],ch;
    int i,count=0;
    printf("enter a string ");
    fgets(s,100,stdin);
    printf("enter a character ");
    scanf("%c",&ch);
    for(i=0;s[i]!='\0';i++){
        if(s[i]==ch){
            count++;
        }
    }
    printf("frequency=%d",count);
return 0;
}
